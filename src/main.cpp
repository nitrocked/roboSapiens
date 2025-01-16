#include <Arduino.h>
#include <AIChatbot.h>
#include "../secrets.h"
#include "RobosapiensController.h"

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
    delay(1000);
  } while (!wifiConnected);

  // Do something to indicate successful WiFi connection
  robot.sendCommand(RoboCommand::HIGH_FIVE); 
  
  // Select AI service and optionally specify version
  chatbot.selectAI("chatgpt", "gpt-3.5-turbo");
}

void loop()
{  
}

// Fnction definitions
