cmake_minimum_required(VERSION 3.17)
project(Stack3 C)

set(CMAKE_C_STANDARD 99)

add_executable(Stack3 tStack.c lStack.h lStack.c tStack.c)