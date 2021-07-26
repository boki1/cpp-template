add_subdirectory(lib)
target_include_directories(lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

add_subdirectory(tests)
