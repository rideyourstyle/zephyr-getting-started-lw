# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)
#include(../../paths.cmake)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(HelloEqual VERSION 1.0.0)

set(EXECUTABLE_NAME app)
set(LIBRARY_NAME Library)

add_library(${LIBRARY_NAME} lib/equal_checker.c)
target_include_directories(${LIBRARY_NAME} PUBLIC lib/)

target_link_libraries(${EXECUTABLE_NAME} PUBLIC ${LIBRARY_NAME})


target_sources(${EXECUTABLE_NAME} PRIVATE src/main.c)

