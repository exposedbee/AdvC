cmake_minimum_required(VERSION 3.17)
project(Stacktest C)

set(CMAKE_C_STANDARD 99)

add_executable(Stacktest tStack.c Stack.h Stack.c)