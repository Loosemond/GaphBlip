#include "WindowGLFW.hpp"

#include <GLFW/glfw3.h>
// Std
#include <memory>
#include <iostream>

WindowGLFW::WindowGLFW(uint32_t width, uint32_t height)
{
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);
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

bool WindowGLFW::CreateWindowSurface(VkInstance &instance, VkSurfaceKHR &surface)
{
    return glfwCreateWindowSurface(instance, windowPtr, nullptr, &surface);
}

void WindowGLFW::WindowPixelResolution(int &width, int &height)
{
    glfwGetFramebufferSize(windowPtr, &width, &height);
    return;
}

GLFWwindow *WindowGLFW::GetPointer()
{
    return windowPtr;
}
