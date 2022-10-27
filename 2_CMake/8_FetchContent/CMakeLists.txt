cmake_minimum_required(VERSION 3.16)

project(SourcesAndHeaders
        VERSION 1.0.0
        DESCRIPTION "sources and headers"
        LANGUAGES C CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(LIB_NAME lib)
set(EXECUTABLE_NAME executable)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/")
include(AddGitSubmodule)
include(FetchContent)

FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt.git
    GIT_TAG 9.1.0
)
FetchContent_MakeAvailable(fmt)

FetchContent_Declare(
    spdlog
    GIT_REPOSITORY https://github.com/gabime/spdlog.git
    GIT_TAG v1.10.0
)
FetchContent_MakeAvailable(spdlog)

add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(configured)
