set(EXE_SOURCES
    "main.cpp")

add_executable(${EXECUTABLE_NAME} ${EXE_SOURCES})

target_include_directories(${EXECUTABLE_NAME} PUBLIC
    "${CMAKE_BINARY_DIR}/_dep/fmt-src/include"
    "${CMAKE_BINARY_DIR}/_dep/spdlog-src/include")

target_link_libraries(${EXECUTABLE_NAME} PUBLIC 
    ${LIB_NAME}
    fmt::fmt
    spdlog::spdlog_header_only)
