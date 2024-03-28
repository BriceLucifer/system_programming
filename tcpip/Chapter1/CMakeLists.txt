cmake_minimum_required(VERSION 3.26)
project(Chapter1 C)

set(CMAKE_C_STANDARD 11)

add_executable(Chapter1
        hello_client.c
        hello_server.c
        hello_client.c
        error.h
        low_open.c
        low_read.c
        fd_seri.c)
