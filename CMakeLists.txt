cmake_minimum_required(VERSION 3.21)
project(VulkanEngine LANGUAGES CXX)

# VCPKG for libs management
set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake")

# C++ parameters
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Dependencies
find_package(Vulkan REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)

# Sources
add_executable(VulkanEngine
    src/main.cpp
    src/VulkanApp.cpp
)

# include dirs
target_include_directories(VulkanEngine PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Linking
target_link_libraries(VulkanEngine PRIVATE
    Vulkan::Vulkan
    glfw
    glm::glm
)

# Windows specific
if(WIN32)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif()