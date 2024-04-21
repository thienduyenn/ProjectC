cmake_minimum_required(VERSION 3.28)
project(projectC C)

set(CMAKE_C_STANDARD 11)

add_executable(projectC main.c
        staff.h
)
