cmake_minimum_required(VERSION 3.12)
project(pukio VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)
include(cmake/external.cmake)
include(cmake/config.cmake)

set(EXE_NAME pukio)

file(GLOB SOURCEFILES "src/*.cpp")

add_executable(${EXE_NAME} ${SOURCEFILES})

target_include_directories(${EXE_NAME} PUBLIC
    ${Vulkan_INCLUDE_DIR}
    ${GLFW_INCLUDE_DIR}
    ${IMGUI_INCLUDE_DIR}
    include
)

target_link_libraries(${EXE_NAME}
    ${Vulkan_LIBRARY}
    ${GLFW_LIBRARIES}
    ${IMGUI_LIBRARIES}
)