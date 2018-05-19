cmake_minimum_required (VERSION 3.5)

project(EXE)

aux_source_directory(. DIR_SRCS)

add_executable(${CMAKE_PROJECT_NAME} main.cc)


