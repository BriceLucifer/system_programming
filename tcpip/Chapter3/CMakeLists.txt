cmake_minimum_required(VERSION 3.26)
project(Chapter3 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Chapter3
        endian_conv.c
        inet_addr.c
        inet_aton.c)
