cmake_minimum_required (VERSION 3.5)

project(EXE)

include_directories(Class)

aux_source_directory(. DIR_SRCS)
aux_source_directory(Class CLASS_SRC)

add_executable(${CMAKE_PROJECT_NAME} ${DIR_SRCS} ${CLASS_SRC})


