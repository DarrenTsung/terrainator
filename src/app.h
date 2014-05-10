#ifndef APP_H
#define APP_H

#include "pnoise.h"

struct Keys {
    bool up    = false;
    bool down  = false;
    bool left  = false;
    bool right = false;
    bool space = false;
};

class App {
    private:
        PNoise noise;
        int width, height;

    public:
        // struct for key input
        Keys keys_pressed;

        // constructors
        App() {};
        App(int width, int height): width(width), height(height) {}

        // initialize the perlin noise
        void initialize();
        // update the application by delta time
        void update(double delta);
        // log a formatted string to stderr
        void log(const std::string fmt_str, ...);
};

#endif // APP_H
