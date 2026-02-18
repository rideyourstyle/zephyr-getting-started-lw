set(LIBRARY_SOURCES
    equal_checker.c
)
set(LIBRARY_INCLUDES
    .
)

add_library(equal_checker STATIC
    ${LIBRARY_SOURCES}
)

target_include_directories(equal_checker PUBLIC
    ${LIBRARY_INCLUDES}
)
