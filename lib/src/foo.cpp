#include <fmt/core.h>
#include <lib/foo.h>

namespace cpp_template {

int foo(std::string &out) {
  out = fmt::format("cpp_template::foo() was called and will return {}\n", 42);
  return 42;
}

}  // namespace cpp_template
