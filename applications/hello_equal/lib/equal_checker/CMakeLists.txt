

add_library(${LIBRARY_NAME} STATIC equal_checker.c)

target_include_directories(${LIBRARY_NAME} PUBLIC "./")

