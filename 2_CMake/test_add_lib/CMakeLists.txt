cmake_minimum_required(VERSION 3.0)

project(hello_world)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_subdirectory(lib)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} lib)
