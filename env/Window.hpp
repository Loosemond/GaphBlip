#pragma once

#include <GLFW/glfw3.h>
// std
#include <memory>

class Window
{
public:
    virtual ~Window() = default;
    virtual bool closeFLag() = 0;
    virtual void pollEvents() = 0;
    virtual const char **getRequiredInstanceExtensions(uint32_t *count) = 0;
    virtual bool CreateWindowSurface(VkInstance &instance, VkSurfaceKHR &surface) = 0;

protected:
    Window() = default;
};