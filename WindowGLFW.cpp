#include "WindowGLFW.hpp"

#include <GLFW/glfw3.h>
// Std
#include <memory>
#include <iostream>

WindowGLFW::WindowGLFW(uint32_t width, uint32_t height)
{
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    windowPtr = glfwCreateWindow(width, height, "Vulkan", nullptr, nullptr);
    std::cout << "Window Created\n";
}

WindowGLFW::~WindowGLFW()
{
    glfwDestroyWindow(windowPtr);
    std::cout << "Window Destroyed\n";
}

bool WindowGLFW::closeFLag()
{
    return glfwWindowShouldClose(windowPtr);
}

void WindowGLFW::pollEvents()
{
    glfwPollEvents();
}

const char **WindowGLFW::getRequiredInstanceExtensions(uint32_t *count)
{
    return glfwGetRequiredInstanceExtensions(count);
}