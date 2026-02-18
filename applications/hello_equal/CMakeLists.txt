# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)
#include(../../paths.cmake)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(HelloEqual VERSION 1.0.0)

set(CMAKE_C_STANDARD          11)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(EXECUTABLE_NAME app)
set(LIBRARY_NAME Library)

add_subdirectory(lib)
add_subdirectory(app)

