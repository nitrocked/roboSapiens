#ifndef ROBOTWEBSERVER_H
#define ROBOTWEBSERVER_H

#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "RoboCommand.h"
#include "RobosapiensController.h"

// Inicialización de conteos de comandos para el tamaño de cada array
extern int leftCommandCount;
extern int rightCommandCount;
extern int commonCommandCount;

// Declaración de funciones que serán implementadas en RobotWebServer.cpp
void handleRoot();
void setupWebServer(RobosapiensController &robot);
void loopWebServer();

#endif // ROBOTWEBSERVER_H
