#pragma once

#include "citrus/types.hpp"

namespace ctr {
    namespace hid {
        typedef enum {
            BUTTON_NONE = 0,
            BUTTON_A = (1 << 0),
            BUTTON_B = (1 << 1),
            BUTTON_SELECT = (1 << 2),
            BUTTON_START = (1 << 3),
            BUTTON_DRIGHT = (1 << 4),
            BUTTON_DLEFT = (1 << 5),
            BUTTON_DUP = (1 << 6),
            BUTTON_DDOWN = (1 << 7),
            BUTTON_R = (1 << 8),
            BUTTON_L = (1 << 9),
            BUTTON_X = (1 << 10),
            BUTTON_Y = (1 << 11),
            BUTTON_ZL = (1 << 14),
            BUTTON_ZR = (1 << 15),
            BUTTON_TOUCH = (1 << 20),
            BUTTON_CSTICK_RIGHT = (1 << 24),
            BUTTON_CSTICK_LEFT = (1 << 25),
            BUTTON_CSTICK_UP = (1 << 26),
            BUTTON_CSTICK_DOWN = (1 << 27),
            BUTTON_CPAD_RIGHT = (1 << 28),
            BUTTON_CPAD_LEFT = (1 << 29),
            BUTTON_CPAD_UP = (1 << 30),
            BUTTON_CPAD_DOWN = (1 << 31),
            BUTTON_UP = BUTTON_DUP | BUTTON_CPAD_UP,
            BUTTON_DOWN = BUTTON_DDOWN | BUTTON_CPAD_DOWN,
            BUTTON_LEFT = BUTTON_DLEFT | BUTTON_CPAD_LEFT,
            BUTTON_RIGHT = BUTTON_DRIGHT | BUTTON_CPAD_RIGHT,
        } Button;

        typedef struct {
            int x;
            int y;
        } Touch;

        typedef struct {
            int x;
            int y;
        } Analog;

        typedef struct {
            int x;
            int y;
            int z;
        } Axis;

        void poll();

        Button anyPressed();
        bool released(Button button);
        bool pressed(Button button);
        bool held(Button button);

        Touch touch();

        Analog circlePad();
        Analog cStick();

        void enableAccelerometer();
        void disableAccelerometer();
        Axis accelerometer();

        void enableGyroscope();
        void disableGyroscope();
        Axis gyroscope();

        const std::string buttonName(Button button);
    }
}