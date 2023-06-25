// \file

#ifndef CPP_TEMPLATE_FOO_H_INCLUDED
#define CPP_TEMPLATE_FOO_H_INCLUDED

#include <string>

namespace cpp_template {

/// \brief This is a test class.
class bar {
 public:
  /// \brief This is the only API of the library that comes of with cpp-template
  /// so far. \param[out] out_str Gets a nicely formatted string from the "fmt"
  /// library. \return	Always 42. Because that is the answer, right?
  [[nodiscard]] static int foo(std::string &out_str);
};

}  // namespace cpp_template

#endif
