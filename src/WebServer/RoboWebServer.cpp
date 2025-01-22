#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "RoboCommand.h"
#include "RobosapiensController.h"
#include "utils.h"

// Supongamos que estos arrays están definidos en alguna parte del programa.
RoboCommand LeftCommands[] = {RoboCommand::LEFT_ARM_UP, RoboCommand::LEFT_ARM_OUT, RoboCommand::TILT_BODY_LEFT, RoboCommand::LEFT_ARM_DOWN, RoboCommand::LEFT_ARM_IN, RoboCommand::TURN_LEFT};   // Array de comandos para movimientos a la izquierda
RoboCommand RightCommands[] = {RoboCommand::RIGHT_ARM_UP, RoboCommand::RIGHT_ARM_OUT, RoboCommand::TILT_BODY_RIGHT, RoboCommand::RIGHT_ARM_DOWN, RoboCommand::RIGHT_ARM_IN, RoboCommand::TURN_RIGHT};   // Array de comandos para movimientos a la derecha
RoboCommand OtherCommands[] = {RoboCommand::WALK_FORWARD, RoboCommand::WALK_BACKWARD, RoboCommand::STOP};   // Array de comandos para otros movimientos

int leftCommandCount = sizeof(LeftCommands) / sizeof(LeftCommands[0]);     // Inicialización con tamaño del array
int rightCommandCount = sizeof(RightCommands) / sizeof(RightCommands[0]);  // Inicialización con tamaño del array
int moveCommandCount = sizeof(OtherCommands) / sizeof(OtherCommands[0]);     // Inicialización con tamaño del array

ESP8266WebServer server(80);

void handleRoot() {
    // Generación del HTML
    String html = "<html><body>";
    html += "<h1>RoboSapiens Controller</h1>";
    html += "<img src=\"/robot_image\" alt=\"Robot Image\" style=\"display:block;margin-left:auto;margin-right:auto;\">";

    html += "<div style=\"display:flex;justify-content:space-between;\">";
    for (int i = 0; i < leftCommandCount; ++i) {
        RoboCommand command = LeftCommands[i];
        // Print enum name value to Serial
        Serial.println(getCommandName(command));
        html += "<button onclick=\"sendCommand(" + String((uint8_t)command) + ")\">" + getCommandName(command) + "</button>";
    }
    html += "</div>";

    html += "<div style=\"display:flex;justify-content:space-between;\">";
    for (int i = 0; i < rightCommandCount; ++i) {
        RoboCommand command = RightCommands[i];
        html += "<button onclick=\"sendCommand(" + String((uint8_t)command) + ")\">" + getCommandName(command) + "</button>";
    }
    html += "</div>";

    html += "<div style=\"text-align:center;\">";
    for (int i = 0; i < moveCommandCount; ++i) {
        RoboCommand command = OtherCommands[i];
        html += "<button onclick=\"sendCommand(" + String((uint8_t)command) + ")\">" + getCommandName(command) + "</button>";
    }
    html += "</div>";

    html += "<script>";
    html += "function sendCommand(command) {";
    html += "  var xhr = new XMLHttpRequest();";
    html += "  xhr.open('POST', '/command', true);";
    html += "  xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');";
    html += "  xhr.send('cmd=' + command);";
    html += "}";
    html += "</script>";
    html += "</body></html>";

    server.send(200, "text/html", html);
}

void setupWebServer(RobosapiensController &robot) {
    server.on("/", HTTP_GET, handleRoot);

    server.on("/command", HTTP_POST, [&robot]() {
        if (server.hasArg("plain")) {
            String commandData = server.arg("plain");
            // uint8_t commandValue = (uint8_t)commandData.toInt(); // Asegúrate de convertir a uint8_t
            robot.sendCommand(static_cast<RoboCommand>(commandData.toInt()));
            server.send(200, "text/plain", "Command sent: " + commandData);
        } else {
            server.send(400, "text/plain", "Bad Request: No command received.");
        }
    });

    server.begin();
}

void loopWebServer() {
    server.handleClient();
}