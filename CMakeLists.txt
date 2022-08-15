cmake_minimum_required(VERSION 3.23)
project(HandWrittingDetection)

set(CMAKE_CXX_STANDARD 20)

add_executable(HandWrittingDetection main.cpp src/data.cpp include/data.h src/data_handler.cpp include/data_handler.h)
