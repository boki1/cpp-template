#include <gtest/gtest.h>
#include <lib/foo.h>

#include <string>

TEST(ItWorks, TestTest) { EXPECT_EQ(1 + 1, 2); }

TEST(ItWorks, TestFoo) {
  std::string out_str;
  const int out_int = cpp_template::bar::foo(out_str);
  EXPECT_EQ(out_int, 42);
  EXPECT_EQ(out_str, "cpp_template::foo() was called and will return 42\n");
}
