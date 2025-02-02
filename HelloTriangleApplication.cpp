#include "stdafx.h"

static const uint32_t Width = 800;
static const uint32_t Height = 600;

struct HelloTriangleApplication
{
    void run()
    {
        initWindow();
        initVulkan();
        mainLoop();
        cleanup();
    }

  private:
    GLFWwindow *m_window;

    void initWindow()
    {
        glfwInit();

        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        m_window = glfwCreateWindow(Width, Height, "Vulkan", nullptr, nullptr);
    }

    void initVulkan()
    {
    }

    void mainLoop()
    {
        while (!glfwWindowShouldClose(m_window))
        {
            glfwPollEvents();
        }
    }

    void cleanup()
    {
        glfwDestroyWindow(m_window);
        glfwTerminate();
    }
};

int main()
{
    HelloTriangleApplication app;

    try
    {
        app.run();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}