#include "RobosapiensController.h"
#include <utils.h>

RobosapiensController::RobosapiensController(uint8_t pin) : controlPin(pin) {}

    void RobosapiensController::begin() {
        pinMode(controlPin, OUTPUT);
        digitalWrite(controlPin, HIGH); // Estado alto inicial (idle)
    }

    void RobosapiensController::sendCommand(RoboCommand command) {
        // Asegúrate de que el comando sea válido (MSB debe ser 1)
        if ((static_cast<uint8_t>(command) & 0x80) == 0) {
            Serial.println("Comando inválido: el MSB debe ser 1.");
            return;
        }
        Serial.println("> RobosapiensController sendCommand: " + getCommandName(command));
        // Señal de inicio (low por 8/1200 segundos)
        setLowForTicks(8);

        // Enviar los 8 bits del comando (MSB primero)
        for (int i = 7; i >= 0; --i) {
            bool bit = (static_cast<uint8_t>(command) >> i) & 0x01;
            if (bit) {
                // Si el bit es 1: high por 4 ticks, luego low por 1 tick
                setHighForTicks(4);
                setLowForTicks(1);
            } else {
                // Si el bit es 0: high por 1 tick, luego low por 1 tick
                setHighForTicks(1);
                setLowForTicks(1);
            }
        }

        // Volver al estado idle (high)
        digitalWrite(controlPin, HIGH);
        delayMicroseconds(1000); // Pequeña pausa entre señales
    }

    void RobosapiensController::setHighForTicks(uint8_t ticks) {
        digitalWrite(controlPin, HIGH);
        delayMicroseconds(clockPeriod * ticks);
    }

    void RobosapiensController::setLowForTicks(uint8_t ticks) {
        digitalWrite(controlPin, LOW);
        delayMicroseconds(clockPeriod * ticks);
    }