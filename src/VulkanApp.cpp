#include "VulkanApp.h"

void VulkanApp::run() {
    initWindow();
    initVulkan();
    mainLoop();
    cleanup();
}

void VulkanApp::initWindow() {
    if(!glfwInit()) {
        throw std::runtime_error("Failed tto initialize GLFW");
    }

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan Engine", nullptr, nullptr);
    if(!window) {
        throw std::runtime_error("Failed to create GLFW window");
    }
}

void VulkanApp::initVulkan() {
    // Init Vulkan's instances, drivers, swapchain...
    std::cout << "Vulkan initialisation placeholder\n";
}

void VulkanApp::mainLoop() {
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }
}

void VulkanApp::cleanup() {
    glfwDestroyWindow(window);
    glfwTerminate();
}