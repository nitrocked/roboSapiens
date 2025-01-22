#include "RoboCommand.h"  

String getCommandName(RoboCommand command) {
    switch (command) {
        case RoboCommand::TURN_RIGHT:
            return "Turn Right";
        case RoboCommand::RIGHT_ARM_UP:
            return "Right Arm Up";
        case RoboCommand::RIGHT_ARM_OUT:
            return "Right Arm Out";
        case RoboCommand::TILT_BODY_RIGHT:
            return "Tilt Body Right";
        case RoboCommand::RIGHT_ARM_DOWN:
            return "Right Arm Down";
        case RoboCommand::RIGHT_ARM_IN:
            return "Right Arm In";
        case RoboCommand::WALK_FORWARD:
            return "Walk Forward";
        case RoboCommand::WALK_BACKWARD:
            return "Walk Backward";
        case RoboCommand::TURN_LEFT:
            return "Turn Left";
        case RoboCommand::LEFT_ARM_UP:
            return "Left Arm Up";
        case RoboCommand::LEFT_ARM_OUT:
            return "Left Arm Out";
        case RoboCommand::TILT_BODY_LEFT:
            return "Tilt Body Left";
        case RoboCommand::LEFT_ARM_DOWN:
            return "Left Arm Down";
        case RoboCommand::LEFT_ARM_IN:
            return "Left Arm In";
        case RoboCommand::STOP: 
            return "Stop";
        case RoboCommand::MASTER_COMMAND_PROGRAM:   
            return "Master Command Program";
        case RoboCommand::PROGRAM_PLAY:
            return "Program Play";
        case RoboCommand::RIGHT_SENSOR_PROGRAM:
            return "Right Sensor Program";
        case RoboCommand::LEFT_SENSOR_PROGRAM:
            return "Left Sensor Program";
        case RoboCommand::SONIC_SENSOR_PROGRAM:
            return "Sonic Sensor Program";
        case RoboCommand::RIGHT_TURN_STEP:
            return "Right Turn Step";
        case RoboCommand::RIGHT_HAND_THUMP:
            return "Right Hand Thump";
        case RoboCommand::RIGHT_HAND_THROW:
            return "Right Hand Throw";
        case RoboCommand::SLEEP:
            return "Sleep";
        case RoboCommand::RIGHT_HAND_PICKUP:
            return "Right Hand Pickup";
        case RoboCommand::LEAN_BACKWARD:
            return "Lean Backward";
        case RoboCommand::FORWARD_STEP:
            return "Forward Step";
        case RoboCommand::BACKWARD_STEP:
            return "Backward Step";
        case RoboCommand::LEFT_TURN_STEP:
            return "Left Turn Step";
        case RoboCommand::LEFT_HAND_THUMP:
            return "Left Hand Thump";
        case RoboCommand::LEFT_HAND_THROW:  
            return "Left Hand Throw";
        case RoboCommand::LISTEN:
            return "Listen";
        case RoboCommand::LEFT_HAND_PICKUP:
            return "Left Hand Pickup";
        case RoboCommand::LEAN_FORWARD:
            return "Lean Forward";
        case RoboCommand::RESET:
            return "Reset";
        case RoboCommand::RIGHT_HAND_STRIKE_3:
            return "Right Hand Strike 3";
        case RoboCommand::RIGHT_HAND_SWEEP:
            return "Right Hand Sweep";
        case RoboCommand::BURP:
            return "Burp";
        case RoboCommand::RIGHT_HAND_STRIKE_2:
            return "Right Hand Strike 2";
        case RoboCommand::HIGH_FIVE:
            return "High Five";
        case RoboCommand::RIGHT_HAND_STRIKE_1:
            return "Right Hand Strike 1";
        case RoboCommand::BULLDOZER:
            return "Bulldozer"; 
        case RoboCommand::OOPS_FART:
            return "Oops Fart";
        case RoboCommand::LEFT_HAND_STRIKE_3:
            return "Left Hand Strike 3";
        case RoboCommand::LEFT_HAND_SWEEP:  
            return "Left Hand Sweep";
        case RoboCommand::WHISTLE:
            return "Whistle";
        case RoboCommand::LEFT_HAND_STRIKE_2:
            return "Left Hand Strike 2";
        case RoboCommand::TALKBACK:
            return "Talkback";
        case RoboCommand::LEFT_HAND_STRIKE_1:
            return "Left Hand Strike 1";
        case RoboCommand::ROAR:
            return "Roar";
        case RoboCommand::DEMO_ALL:
            return "Demo All";
        case RoboCommand::POWER_OFF:
            return "Power Off";
        case RoboCommand::DEMO_1:
            return "Demo 1";
        case RoboCommand::DEMO_2:
            return "Demo 2";
        case RoboCommand::DANCE:
            return "Dance";
        default:
            return "Unknown Command";
    }
}