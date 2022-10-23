cmake_minimum_required(VERSION 3.16)

project(BasicProject
        VERSION 1.0.0
        DESCRIPTION "basic project template"
        LANGUAGES C CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(lib STATIC my_lib.cpp)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC lib)
