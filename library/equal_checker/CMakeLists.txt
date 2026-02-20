
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

if(TARGET zephyr_interface)
    target_link_libraries(equal_checker PRIVATE zephyr_interface)
endif()
