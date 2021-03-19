cmake_minimum_required(VERSION 3.17)
project(AscendingOrder C)

set(CMAKE_C_STANDARD 99)

add_executable(AscendingOrder gSort.h gSort.c tSort.c tSort.c IntArray.c IntArray.h testSort.c)