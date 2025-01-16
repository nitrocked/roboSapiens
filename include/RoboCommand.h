#ifndef ROBOSAPIEN_COMMANDS_H
#define ROBOSAPIEN_COMMANDS_H

#include <Arduino.h>

// Enumerado con los comandos del Robosapien, organizados por categorías
enum class RoboCommand : uint8_t {
    // Movimiento básico
    TURN_RIGHT = 0x80,           // Girar a la derecha
    RIGHT_ARM_UP = 0x81,         // Brazo derecho arriba
    RIGHT_ARM_OUT = 0x82,        // Brazo derecho hacia afuera
    TILT_BODY_RIGHT = 0x83,      // Inclinar cuerpo a la derecha
    RIGHT_ARM_DOWN = 0x84,       // Brazo derecho abajo
    RIGHT_ARM_IN = 0x85,         // Brazo derecho hacia adentro
    WALK_FORWARD = 0x86,         // Caminar hacia adelante
    WALK_BACKWARD = 0x87,        // Caminar hacia atrás
    TURN_LEFT = 0x88,            // Girar a la izquierda
    LEFT_ARM_UP = 0x89,          // Brazo izquierdo arriba
    LEFT_ARM_OUT = 0x8A,         // Brazo izquierdo hacia afuera
    TILT_BODY_LEFT = 0x8B,       // Inclinar cuerpo a la izquierda
    LEFT_ARM_DOWN = 0x8C,        // Brazo izquierdo abajo
    LEFT_ARM_IN = 0x8D,          // Brazo izquierdo hacia adentro
    STOP = 0x8E,                 // Detener

    // Comandos de programación
    MASTER_COMMAND_PROGRAM = 0x90, // Comando maestro de programación
    PROGRAM_PLAY = 0x91,           // Ejecutar programa
    RIGHT_SENSOR_PROGRAM = 0x92,   // Programa del sensor derecho
    LEFT_SENSOR_PROGRAM = 0x93,    // Programa del sensor izquierdo
    SONIC_SENSOR_PROGRAM = 0x94,   // Programa del sensor sónico

    // Comandos shift verde
    RIGHT_TURN_STEP = 0xA0,        // Paso girar a la derecha
    RIGHT_HAND_THUMP = 0xA1,       // Golpe de mano derecha
    RIGHT_HAND_THROW = 0xA2,       // Lanzar con mano derecha
    SLEEP = 0xA3,                  // Dormir
    RIGHT_HAND_PICKUP = 0xA4,      // Recoger con mano derecha
    LEAN_BACKWARD = 0xA5,          // Inclinar hacia atrás
    FORWARD_STEP = 0xA6,           // Paso adelante
    BACKWARD_STEP = 0xA7,          // Paso atrás
    LEFT_TURN_STEP = 0xA8,         // Paso girar a la izquierda
    LEFT_HAND_THUMP = 0xA9,        // Golpe de mano izquierda
    LEFT_HAND_THROW = 0xAA,        // Lanzar con mano izquierda
    LISTEN = 0xAB,                 // Escuchar
    LEFT_HAND_PICKUP = 0xAC,       // Recoger con mano izquierda
    LEAN_FORWARD = 0xAD,           // Inclinar hacia adelante
    RESET = 0xAE,                  // Reiniciar

    // Comandos shift naranja
    RIGHT_HAND_STRIKE_3 = 0xC0,    // Golpe 3 con mano derecha
    RIGHT_HAND_SWEEP = 0xC1,       // Barrido con mano derecha
    BURP = 0xC2,                   // Eructar
    RIGHT_HAND_STRIKE_2 = 0xC3,    // Golpe 2 con mano derecha
    HIGH_FIVE = 0xC4,              // Choca los cinco
    RIGHT_HAND_STRIKE_1 = 0xC5,    // Golpe 1 con mano derecha
    BULLDOZER = 0xC6,              // Bulldozer
    OOPS_FART = 0xC7,              // Ups (pedo)
    LEFT_HAND_STRIKE_3 = 0xC8,     // Golpe 3 con mano izquierda
    LEFT_HAND_SWEEP = 0xC9,        // Barrido con mano izquierda
    WHISTLE = 0xCA,                // Silbido
    LEFT_HAND_STRIKE_2 = 0xCB,     // Golpe 2 con mano izquierda
    TALKBACK = 0xCC,               // Hablar atrás
    LEFT_HAND_STRIKE_1 = 0xCD,     // Golpe 1 con mano izquierda
    ROAR = 0xCE,                   // Rugir
    DEMO_ALL = 0xD0,               // Todos los demos
    POWER_OFF = 0xD1,              // Apagar
    DEMO_1 = 0xD2,                 // Demo 1 (Karate)
    DEMO_2 = 0xD3,                 // Demo 2 (Rude)
    DANCE = 0xD4                   // Bailar
};

#endif // ROBOSAPIEN_COMMANDS_H
