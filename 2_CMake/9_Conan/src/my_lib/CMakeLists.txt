set(LIB_SOURCES 
    "my_lib.cpp"
    "my_lib_2.cpp")

add_library(${LIB_NAME} STATIC 
    ${LIB_SOURCES})
