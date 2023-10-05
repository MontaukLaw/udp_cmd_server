cmake_minimum_required(VERSION 3.8)
message(STATUS "cmake version ${CMAKE_VERSION}")
project("udp_server")

include_directories(./include)

add_executable(stream_server src/app.c src/cmd_parse.c)
