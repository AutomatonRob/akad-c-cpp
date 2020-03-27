# cmake_minimum_required(VERSION <specify CMake version here>)
set(CMAKE_LEGACY_CYGWIN_WIN32 0) # Remove when CMake >= 2.8.4 is required

project(helloworld C)

set(CMAKE_C_STANDARD 99)

add_executable(helloworld main.c)