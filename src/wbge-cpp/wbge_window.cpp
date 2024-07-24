
#include "../wbge/wbge_window.hpp"

namespace wbge {
    WbgeWindow::WbgeWindow(int w, int h, std::string name) : width{w}, height{h}, windowName{name} {
        initWindow();
    }

    WbgeWindow::~WbgeWindow() {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    void WbgeWindow::initWindow() {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
    }
}
