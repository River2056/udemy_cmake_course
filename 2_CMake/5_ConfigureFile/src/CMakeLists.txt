add_subdirectory(my_lib)
target_include_directories(${LIB_NAME} PUBLIC 
    include
    "${CMAKE_BINARY_DIR}/configured_files/include/"
)
