include_directories(${PROJECT_SOURCE_DIR})

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/. QUICK_SRCS)

add_executable(quick_sort EXCLUDE_FROM_ALL ${QUICK_SRCS})
target_link_libraries(quick_sort)