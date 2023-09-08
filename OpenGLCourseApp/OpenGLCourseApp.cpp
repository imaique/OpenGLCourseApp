#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

// WINDOW DIMENSIONS
const GLint WIDTH = 800, HEIGHT = 600;

int main()
{
    // Initialize GLFW
    if (!glfwInit()) {
        std::cout << "GLFW Initialization Failed\n";
        glfwTerminate();
        return 1;
    }

    // Setup GLFW Window Properties

    // OpenGL Version 3.3
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

    // Disable OpenGL Backward Compatibility
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Allow OpenGL Forward Compatibility
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    GLFWwindow* mainWindow = glfwCreateWindow(WIDTH, HEIGHT, "TEST WINDOW", NULL, NULL);

    if (!mainWindow) {
        std::cout << "GLFW Window Creation Failed\n";
        glfwTerminate();
        return 1;
    }

    // Get Buffer Size Info
    int bufferWidth, bufferHeight;
    glfwGetFramebufferSize(mainWindow, &bufferWidth, &bufferHeight);

    // Set GLEW Context
    glfwMakeContextCurrent(mainWindow);

    // Allow modern extension features
    glewExperimental = GL_TRUE;
}