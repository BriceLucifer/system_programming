cmake_minimum_required(VERSION 3.26)
project(Chapter2 C)

set(CMAKE_C_STANDARD 11)

add_executable(Chapter2
        tcp_server.c
        tcp_client.c)
