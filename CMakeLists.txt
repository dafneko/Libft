cmake_minimum_required(VERSION 3.26)
project(Coreprojects C)

set(CMAKE_C_STANDARD 11)

add_executable(Coreprojects ft_bzero.c
        ft_memset.c)
