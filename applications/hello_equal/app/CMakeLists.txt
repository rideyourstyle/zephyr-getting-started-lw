set(TARGET_SOURCES
    main.c
)
set(TARGET_INCLUDES
    .
)

target_sources(${EXECUTABLE_NAME} PRIVATE
    ${TARGET_SOURCES}
)
target_include_directories(${EXECUTABLE_NAME} PUBLIC
    ${TARGET_INCLUDES}
)

# Link used library modules
target_link_libraries(${EXECUTABLE_NAME} PRIVATE
    equal_checker
)
