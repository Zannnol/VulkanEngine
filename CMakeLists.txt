cmake_minimum_required(VERSION 3.15)
project(VulkanEngine)

set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Vulkan REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)

add_executable(VulkanEngine
    src/main.cpp
)

target_link_libraries(VulkanEngine PRIVATE Vulkan::Vulkan glfw)