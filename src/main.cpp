#include <Arduino.h>
#include <AIChatbot.h>

AIChatbot chatbot;

// Function declarations


void setup()
{
  chatbot.begin(115200);
  // Set API keys
  chatbot.setKey("YOUR_CHATGPT_API_KEY", "chatgpt");
  chatbot.setKey("YOUR_HUGGING_FACE_API_KEY", "huggingface");

  // Connect to WiFi
  if (!chatbot.connectWiFi("SSID", "PASSWORD"))
  {
    Serial.println("Failed to connect to WiFi");
    while (true)
      ; // Halt if WiFi connection fails
  }

  // Select AI service and optionally specify version
  chatbot.selectAI("chatgpt", "gpt-3.5-turbo");
}

void loop()
{  
}

// Fnction definitions
