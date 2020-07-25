include_directories(${PROJECT_SOURCE_DIR})

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/. MERGE_SRCS)

add_executable(merge_sort EXCLUDE_FROM_ALL ${MERGE_SRCS})
target_link_libraries(merge_sort)
