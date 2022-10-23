cmake_minimum_required(VERSION 3.16)

project(IntermediateProject
        VERSION 1.0.0
        DESCRIPTION "basic project template"
        LANGUAGES C CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(src)
add_subdirectory(app)
