#ifndef ROBOSAPIEN_COMMANDS_H
#define ROBOSAPIEN_COMMANDS_H

#include <Arduino.h>

// Enumerado con los comandos del Robosapien, organizados por categorías
enum class RoboCommand : uint8_t  {
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
    DANCE = 0xD4,                   // Bailar
};

// namespace LeftCommands {
//     constexpr RoboCommand LEFT_ARM_UP = RoboCommand::LEFT_ARM_UP;
//     constexpr RoboCommand LEFT_ARM_OUT = RoboCommand::LEFT_ARM_OUT;
//     constexpr RoboCommand TILT_BODY_LEFT = RoboCommand::TILT_BODY_LEFT;
//     constexpr RoboCommand LEFT_ARM_DOWN = RoboCommand::LEFT_ARM_DOWN;
//     constexpr RoboCommand LEFT_ARM_IN = RoboCommand::LEFT_ARM_IN;
//     constexpr RoboCommand TURN_LEFT = RoboCommand::TURN_LEFT;
// }

// namespace RightCommands {
//     constexpr RoboCommand RIGHT_ARM_UP = RoboCommand::RIGHT_ARM_UP;
//     constexpr RoboCommand RIGHT_ARM_OUT = RoboCommand::RIGHT_ARM_OUT;
//     constexpr RoboCommand TILT_BODY_RIGHT = RoboCommand::TILT_BODY_RIGHT;
//     constexpr RoboCommand RIGHT_ARM_DOWN = RoboCommand::RIGHT_ARM_DOWN;
//     constexpr RoboCommand RIGHT_ARM_IN = RoboCommand::RIGHT_ARM_IN;
//     constexpr RoboCommand TURN_RIGHT = RoboCommand::TURN_RIGHT;
// }

// namespace OtherCommands {
//     constexpr RoboCommand WALK_FORWARD = RoboCommand::WALK_FORWARD;
//     constexpr RoboCommand WALK_BACKWARD = RoboCommand::WALK_BACKWARD;
//     constexpr RoboCommand STOP = RoboCommand::STOP;
// }

// namespace ProgramCommands {
//     constexpr RoboCommand MASTER_COMMAND_PROGRAM = RoboCommand::MASTER_COMMAND_PROGRAM;
//     constexpr RoboCommand PROGRAM_PLAY = RoboCommand::PROGRAM_PLAY;
//     constexpr RoboCommand RIGHT_SENSOR_PROGRAM = RoboCommand::RIGHT_SENSOR_PROGRAM;
//     constexpr RoboCommand LEFT_SENSOR_PROGRAM = RoboCommand::LEFT_SENSOR_PROGRAM;
//     constexpr RoboCommand SONIC_SENSOR_PROGRAM = RoboCommand::SONIC_SENSOR_PROGRAM;
// }

// namespace TalkCommands {
//     constexpr RoboCommand BURP = RoboCommand::BURP;
//     constexpr RoboCommand LISTEN = RoboCommand::LISTEN;
//     constexpr RoboCommand TALKBACK = RoboCommand::TALKBACK;
//     constexpr RoboCommand WHISTLE = RoboCommand::WHISTLE;
// }

// namespace ActionCommands {
//     constexpr RoboCommand HIGH_FIVE = RoboCommand::HIGH_FIVE;
//     constexpr RoboCommand POWER_OFF = RoboCommand::POWER_OFF;
//     constexpr RoboCommand RESET = RoboCommand::RESET;
//     constexpr RoboCommand SLEEP = RoboCommand::SLEEP;
// }

// namespace SoundCommands {
//     constexpr RoboCommand BULLDOZER = RoboCommand::BULLDOZER;
//     constexpr RoboCommand DEMO_1 = RoboCommand::DEMO_1;
//     constexpr RoboCommand DEMO_2 = RoboCommand::DEMO_2;
//     constexpr RoboCommand DEMO_ALL = RoboCommand::DEMO_ALL;
//     constexpr RoboCommand DANCE = RoboCommand::DANCE;
//     constexpr RoboCommand OOPS_FART = RoboCommand::OOPS_FART;
//     constexpr RoboCommand ROAR = RoboCommand::ROAR;
// }

// namespace LeftHandCommands {
//     constexpr RoboCommand LEFT_HAND_PICKUP = RoboCommand::LEFT_HAND_PICKUP;
//     constexpr RoboCommand LEFT_HAND_STRIKE_1 = RoboCommand::LEFT_HAND_STRIKE_1;
//     constexpr RoboCommand LEFT_HAND_STRIKE_2 = RoboCommand::LEFT_HAND_STRIKE_2;
//     constexpr RoboCommand LEFT_HAND_STRIKE_3 = RoboCommand::LEFT_HAND_STRIKE_3;
//     constexpr RoboCommand LEFT_HAND_SWEEP = RoboCommand::LEFT_HAND_SWEEP;
// }

// namespace RightHandCommands {
//     constexpr RoboCommand RIGHT_HAND_PICKUP = RoboCommand::RIGHT_HAND_PICKUP;
//     constexpr RoboCommand RIGHT_HAND_STRIKE_1 = RoboCommand::RIGHT_HAND_STRIKE_1;
//     constexpr RoboCommand RIGHT_HAND_STRIKE_2 = RoboCommand::RIGHT_HAND_STRIKE_2;
//     constexpr RoboCommand RIGHT_HAND_STRIKE_3 = RoboCommand::RIGHT_HAND_STRIKE_3;
//     constexpr RoboCommand RIGHT_HAND_SWEEP = RoboCommand::RIGHT_HAND_SWEEP;
//     constexpr RoboCommand RIGHT_HAND_THROW = RoboCommand::RIGHT_HAND_THROW;
//     constexpr RoboCommand RIGHT_HAND_THUMP = RoboCommand::RIGHT_HAND_THUMP;
// }

// namespace StepCommands {
//     constexpr RoboCommand BACKWARD_STEP = RoboCommand::BACKWARD_STEP;
//     constexpr RoboCommand FORWARD_STEP = RoboCommand::FORWARD_STEP;
//     constexpr RoboCommand LEFT_TURN_STEP = RoboCommand::LEFT_TURN_STEP;
//     constexpr RoboCommand RIGHT_TURN_STEP = RoboCommand::RIGHT_TURN_STEP;
// }

// namespace DemoCommands {
//     constexpr RoboCommand DANCE = RoboCommand::DANCE;
//     constexpr RoboCommand DEMO_1 = RoboCommand::DEMO_1;
//     constexpr RoboCommand DEMO_2 = RoboCommand::DEMO_2;
//     constexpr RoboCommand DEMO_ALL = RoboCommand::DEMO_ALL;
// }



#endif // ROBOSAPIEN_COMMANDS_H
