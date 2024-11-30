cmake_minimum_required(VERSION 3.24)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(gunix VERSION 1.0)

set(SOURCE_FILES
    booter.c
    ../kernel/ethernet/con-test.c
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
