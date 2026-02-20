# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)
include(../../environment.cmake)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(HelloEqual VERSION 1.0.0)

add_subdirectory(${ZEPHYR_WORKSPACE_ROOT}library/ ${CMAKE_CURRENT_BINARY_DIR}-lib EXCLUDE_FROM_ALL)

# application
set(CMAKE_C_STANDARD          11)
set(CMAKE_C_STANDARD_REQUIRED ON)

target_sources(app PRIVATE
    src/main.c
)
target_link_libraries(app PRIVATE
    equal_checker
)

