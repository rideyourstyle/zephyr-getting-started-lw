# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)
include(../../paths.cmake)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(HelloEqual VERSION 1.0.0)

set(CMAKE_C_STANDARD          11)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(EXECUTABLE_NAME app)

# add libraries
add_subdirectory(${ZEPHYR_WORKSPACE_ROOT}library/ ${PROJECT_SOURCE_DIR}/build EXCLUDE_FROM_ALL)

# include app
add_subdirectory(app)

