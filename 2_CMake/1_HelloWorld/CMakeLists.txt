cmake_minimum_required(VERSION 3.16)

project(CppProjectTemplate
        VERSION 1.0.0
        DESCRIPTION "C++ project template"
        LANGUAGES C CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${PROJECT_NAME} main.cpp)
