cmake_minimum_required(VERSION 3.20.0)

project(app)
find_package(Zephyr COMPONENTS unittest REQUIRED HINTS $ENV{ZEPHYR_BASE})
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/.. ${CMAKE_CURRENT_BINARY_DIR}-lib EXCLUDE_FROM_ALL)

target_sources(testbinary PRIVATE
    main.c
)

target_link_libraries(testbinary PRIVATE
    equal_checker
)
