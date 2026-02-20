# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)
include(../../environment.cmake)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(HelloEqual VERSION 1.0.0)

add_subdirectory(${ZEPHYR_WORKSPACE_ROOT}library/ ${CMAKE_CURRENT_BINARY_DIR}-lib EXCLUDE_FROM_ALL)

set(CMAKE_C_STANDARD          11)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(EXECUTABLE_NAME app)

# include app
add_subdirectory(app)

