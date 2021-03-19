cmake_minimum_required(VERSION 3.17)
project(finalProject C)

set(CMAKE_C_STANDARD 99)

add_executable(finalProject main.c errrorhandeling/status.h errrorhandeling/status.c List/List.h List/List.c List/tList.c Map/map.h Map/tMap.c Map/Map.c)