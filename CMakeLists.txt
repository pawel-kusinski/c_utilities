cmake_minimum_required(VERSION 3.16)
project(c_utilities C)

set(CMAKE_C_STANDARD 99)
include_directories(src)
add_executable(c_utilities test.c src/bit_reversal.c src/bit_reversal.h)