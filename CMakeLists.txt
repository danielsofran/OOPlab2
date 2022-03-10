cmake_minimum_required(VERSION 3.7.2)
project(lab2 C)

set(CMAKE_C_STANDARD 99)

add_executable(lab2 main.c domain.c domain.h tests.c tests.h repository.c repository.h errors.h validator.c validator.h ui.c ui.h service.c service.h)
