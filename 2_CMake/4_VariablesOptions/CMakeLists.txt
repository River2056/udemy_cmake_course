cmake_minimum_required(VERSION 3.16)

project(VariablesOptions
        VERSION 1.0.0
        DESCRIPTION "variables options"
        LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(LIB_NAME lib)
set(EXECUTABLE_NAME executable)

option(COMPILE_EXECUTABLE "Whether to compile the executable" OFF)

add_subdirectory(src)
if (COMPILE_EXECUTABLE)
    message("compiling app directory...")
    add_subdirectory(app)
else()
    message("W/o exe. compiling")
endif()
