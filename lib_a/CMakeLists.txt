project(LIB_A)

add_library(lib_a implementation.c callbacks.c)
target_include_directories(lib_a PUBLIC ${LIB_A_SOURCE_DIR})
target_link_libraries(lib_a PRIVATE lib_b)