#set(LIBRARY_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/equal_checker/equal_checker.c)
#set(LIBRARY_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/equal_checker/equal_checker.h)
#set(LIBRARY_INCLUDES ${CMAKE_CURRENT_SOURCE_DIR}/equal_checker/)
#add_library(equal_checker STATIC ${LIBRARY_SOURCES} ${LIBRARY_HEADERS})
#target_include_directories(equal_checker PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(equal_checker)