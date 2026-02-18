add_library(Library INTERFACE)

target_include_directories(Library INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}
)

add_subdirectory(equal_checker)