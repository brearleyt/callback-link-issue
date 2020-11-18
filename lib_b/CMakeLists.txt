project(LIB_B)

add_library(lib_b implementation.c)
target_include_directories(lib_b PUBLIC ${LIB_B_SOURCE_DIR})
