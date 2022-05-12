#pragma once

#include <GLFW/glfw3.h>

#include "Window.hpp"
// std
#include <memory>

class WindowGLFW : public Window
{
public:
    WindowGLFW(uint32_t width, uint32_t height);
    bool closeFLag() override;
    void pollEvents() override;
    const char **getRequiredInstanceExtensions(uint32_t *count) override;
    ~WindowGLFW();

private:
    GLFWwindow *windowPtr;
};