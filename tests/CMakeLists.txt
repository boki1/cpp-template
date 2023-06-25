
enable_testing()
find_package(GTest)
include(GoogleTest)

function(add_unit_test name path)
    message("-- cpp-template: Add ${name} unit test")
    set(target "test_${name}")
    add_executable(${target} ${path})
    set_target_properties(${target} PROPERTIES
			LINKER_LANGUAGE CXX)
    target_link_libraries(${target} PRIVATE
			GTest::gtest_main cpp-template)
    target_include_directories(${target} PRIVATE
			${CMAKE_CURRENT_SOURCE_DIR}/../lib/include)
    gtest_discover_tests(${target})
    add_test(NAME ${name}
			COMMAND ${CMAKE_CURRENT_BINARY_DIR}/${target})
endfunction()

add_unit_test(it_works test_it_works.cpp)
