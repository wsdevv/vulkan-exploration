#pragma once

#include "wbge_window.hpp"

namespace wbge {
    class App {
        public:
            static constexpr int WIDTH = 800;
            static constexpr int HEIGHT = 600;
            void run();
        private:
            WbgeWindow wbgeWindow{WIDTH, HEIGHT, "Hello Vulkan!"};
    };
}
