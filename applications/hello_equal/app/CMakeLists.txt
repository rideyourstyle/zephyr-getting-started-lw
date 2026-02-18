set(TARGET_SOURCES 
    main.c
)
set(TARGET_INCLUDES 
    .
)

# include libraries
target_link_libraries(${EXECUTABLE_NAME} PUBLIC
    equal_checker
)

target_sources(${EXECUTABLE_NAME} PRIVATE
    ${TARGET_SOURCES}
)
target_include_directories(${EXECUTABLE_NAME} PUBLIC
    ${TARGET_INCLUDES}
)
