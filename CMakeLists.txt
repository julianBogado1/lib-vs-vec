cmake_minimum_required(VERSION 3.21)
project(lib_vs_vec C)

set(CMAKE_C_STANDARD 99)

include_directories(.)

add_executable(listabiblio.c listabiblio.h tp5.c)

set(CMAKE_C_FLAGS "-Wall -pedantic -std=c99 -lm -fsanitize=address -g")