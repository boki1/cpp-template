cmake_minimum_required(VERSION 3.19.2)
project(templatelib VERSION 0.01)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

# Enable conan.
if(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup(TARGETS)
else()
    message(WARNING "The file conanbuildinfo.cmake doesn't exist, you have to run conan install first")
endif()

# HACK, or at least a handy trick.
set(CMAKE_CURRENT_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../src")

# Library core code
set(CORE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/templatelib")
add_library(templatelib ${CORE_DIR}/LibInterface.h)
target_include_directories(templatelib PRIVATE "${CORE_DIR}")
set_target_properties(templatelib PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries(templatelib PRIVATE CONAN_PKG::fmt)

# Unit-testing code
if ("${SAPLING_BUILD_TESTS}" STREQUAL "yes")
	message("-- TemplateLib: Adding tests to build targets.")
    set(TESTS_DIR "${CMAKE_CURRENT_SOURCE_DIR}/tests")
    include(GoogleTest)
    enable_testing()

    function(add_unit_test name source_file)
		message("-- TemplateLib: Tests: Add ${name} unit test (from ${TESTS_DIR}/${source_files})")
        set(unit_test "test_${name}")
        add_executable(${unit_test} ${TESTS_DIR}/${source_files})
        set_target_properties(${unit_test} PROPERTIES LINKER_LANGUAGE CXX)
        target_link_libraries(${unit_test} PRIVATE
                CONAN_PKG::gtest
                templatelib)
        gtest_discover_tests(${unit_test})
        add_test(
                NAME ${name}
                COMMAND ${CMAKE_CURRENT_BINARY_DIR}/bin/${unit_test})
    endfunction()

	add_unit_test(Lib TestLib.cpp)
endif ()
