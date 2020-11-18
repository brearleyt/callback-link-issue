cmake_minimum_required(VERSION 3.18)
project(callback_link_issue C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(lib_a)
add_subdirectory(lib_b)

add_executable(callback_link_issue main.c)
target_link_libraries(callback_link_issue PRIVATE lib_a)

