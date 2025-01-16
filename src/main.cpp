#include <Arduino.h>
#include <AIChatbot.h>
#include "../secrets.h"
#include "RobosapiensController.h"
#include "RobotWebServer.h"

// Global variables
RobosapiensController robot(D2); 
AIChatbot chatbot;
const int retryDelay = 5000;

// Function declarations

void setup()
{
  // Initialize Serial communication
  chatbot.begin(115200);
  
  // Initialize Robosapiens controller
  robot.begin();
  robot.sendCommand(RoboCommand::WHISTLE); // Wake up Robosapiens
  
  // Set API keys
  chatbot.setKey(API_KEY_CHATGPT, "chatgpt");
  chatbot.setKey(API_KEY_HUGGING_FACE, "huggingface");

  // Connect to WiFi
  bool wifiConnected = false;
  int retries = 6;
  do
  {
    Serial.println("Connecting to WiFi...");
    wifiConnected = chatbot.connectWiFi(WIFI_SSID, WIFI_PASSWORD);
    if (!wifiConnected)
    {
      robot.sendCommand(RoboCommand::OOPS_FART); // Speak "Oops"
      Serial.println("Retrying WiFi connection in a while...");
      delay(retryDelay);
    }
    retries--;
    delay(1000);
  } while (!wifiConnected && retries > 0);

  if (!wifiConnected)
  {
    robot.sendCommand(RoboCommand::SLEEP); // Sleep Robosapiens
    Serial.println("Failed to connect to WiFi. Enabling AP...");
    // Enable AP mode
    WiFi.softAP("Robosapiens", "Klint0000");
    Serial.println("AP enabled. IP address: " + WiFi.softAPIP().toString());
    robot.sendCommand(RoboCommand::BURP); // Speak
  }
  
  // Set up web server
  Serial.println("Setting up web server...");
  setupWebServer(robot);
  Serial.println("Web server ready.");

  // Do something to indicate successful WiFi connection
  robot.sendCommand(RoboCommand::HIGH_FIVE); 
  robot.sendCommand(RoboCommand::TALKBACK); // Speak "Hello"
  
  // Select AI service and optionally specify version
  chatbot.selectAI("chatgpt", "gpt-3.5-turbo");
}

void loop()
{  
  loopWebServer();
}

// Fnction definitions
