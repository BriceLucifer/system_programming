cmake_minimum_required(VERSION 3.26)
project(Chapter4 C)

set(CMAKE_C_STANDARD 11)

add_executable(Chapter4
        echo_server.c
        echo_client.c
        headfiles.h)
