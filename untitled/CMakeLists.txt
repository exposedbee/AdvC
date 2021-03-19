cmake_minimum_required(VERSION 3.17)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled main.c IntArray/IntArray.h IntArray/IntArray.c IntArray/tIntArray.c AStack/Stack.h AStack/Stack.c Stack/tStack.c Stack/lStack.c Stack/lStack.h Gsort/gsort.h Gsort/gsort.c Gsort/tgsort.c errrorhandeling/status.h errrorhandeling/status.c GStack/GStack.h GStack/tGStack.c GStack/cGStack.c GStack2/Stack2.h GStack2/cStack2.c GStack2/tStack2.c)