#ifndef ROBOSAPIEN_CONTROLLER_H
#define ROBOSAPIEN_CONTROLLER_H

#include <Arduino.h>
#include "RoboCommand.h"

// Enumerado con los comandos disponibles

class RobosapiensController {
public:
    // Constructor
    RobosapiensController(uint8_t pin);

    // Inicializar el controlador
    void begin();

    // Enviar un comando al Robosapien
    void sendCommand(RoboCommand command);

private:
    uint8_t controlPin;                // Pin de salida para controlar al Robosapien
    const uint16_t clockPeriod = 833; // Duración de 1 tick en microsegundos (1/1200 segundos)

    // Métodos auxiliares para manejar los tiempos de señal
    void setHighForTicks(uint8_t ticks);
    void setLowForTicks(uint8_t ticks);
};

#endif // ROBOSAPIEN_CONTROLLER_H
