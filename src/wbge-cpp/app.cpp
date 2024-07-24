#include "../wbge/app.hpp"
// #include <GLFW/glfw3.h>

namespace wbge {
    void App::run() {

        while (!wbgeWindow.shouldClose()) {
            glfwPollEvents();
        }
    }
}
