find_package(fmt)

add_library(cpp-template src/foo.cpp)
target_include_directories(cpp-template PUBLIC include/)
target_link_libraries(cpp-template PUBLIC fmt::fmt)
target_compile_options(cpp-template PUBLIC -Wall -Wextra -Werror -std=c++20)
