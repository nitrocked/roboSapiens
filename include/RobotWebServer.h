#ifndef ROBOTWEBSERVER_H
#define ROBOTWEBSERVER_H

#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "RoboCommand.h"
#include "RobosapiensController.h"

// Declaraciones externas para arrays de comandos
// extern RoboCommand LeftCommands[];
// extern RoboCommand RightCommands[];
// extern RoboCommand OtherCommands[];

// Inicialización de conteos de comandos para el tamaño de cada array
extern int leftCommandCount;
extern int rightCommandCount;
extern int moveCommandCount;

// Declaración de funciones que serán implementadas en RobotWebServer.cpp
void handleRoot();
void setupWebServer(RobosapiensController &robot);
void loopWebServer();

#endif // ROBOTWEBSERVER_H
