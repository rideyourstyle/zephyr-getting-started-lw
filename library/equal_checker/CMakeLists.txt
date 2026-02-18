add_library(equal_checker INTERFACE)

target_include_directories(equal_checker INTERFACE
        .
)

target_sources(equal_checker INTERFACE
        equal_checker.c
        equal_checker.h
)

