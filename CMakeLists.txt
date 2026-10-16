cmake_minimum_required(VERSION 3.20)

project(InstaToken LANGUAGES C)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

add_executable(instatoken
    src/main.c
    src/modules/file_handler.c
)