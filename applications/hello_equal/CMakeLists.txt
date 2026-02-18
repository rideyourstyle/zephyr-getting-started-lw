# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)
include(../../environment.cmake)

# Register custom library modules
list(APPEND ZEPHYR_EXTRA_MODULES ${ZEPHYR_WORKSPACE_ROOT}library)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(HelloEqual VERSION 1.0.0)

set(CMAKE_C_STANDARD          11)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(EXECUTABLE_NAME app)

# include app
add_subdirectory(app)

