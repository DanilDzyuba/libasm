cmake_minimum_required(VERSION 3.16)
project(libasm C)

set(CMAKE_C_STANDARD 99)
link_directories(${CMAKE_SOURCE_DIR})
add_executable(libasm main.c libasm.h)
target_link_libraries(libasm asm)