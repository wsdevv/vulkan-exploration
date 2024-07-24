#pragma once

// #include <cstdlib>
// #include <glm/ext/matrix_float4x4.hpp>
// #include <vulkan/vulkan_core.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

// #define GLM_FORCE_RADIANS
// #define GLM_FORCE_DEPTH_ZERO_TO_ONE
// #include <glm/mat4x4.hpp>
// #include <glm/vec4.hpp>
#include <string>


namespace wbge {
    class WbgeWindow {
        public:
            WbgeWindow(int w, int h, std::string name);
            ~WbgeWindow();

            WbgeWindow(const WbgeWindow &) = delete;
            WbgeWindow &operator=(const WbgeWindow &) = delete;

            bool shouldClose() { return glfwWindowShouldClose(window); };

        private:
            void initWindow();
            const int width;
            const int height;

            std::string windowName;
            GLFWwindow *window;
    };
}

// int main() {
//     if (!glfwInit()) {
//         std::cout << "failed to initialize GLFW";
//         exit(EXIT_FAILURE);
//     }

//     glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
//     glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
//     GLFWwindow* window = glfwCreateWindow(800, 600, "Vulkan window", nullptr, nullptr);

//     uint32_t extensionCount = 0;
//     vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

//     std::cout << extensionCount << " extensions supported\n";

//     glm::mat4 matrix;
//     glm::vec4 vec;
//     auto test = matrix * vec;

//     while (!glfwWindowShouldClose(window)) {
//         glfwPollEvents();
//     }

//     glfwDestroyWindow(window);

//     glfwTerminate();
//     return 0;
// }
