#include <gtest/gtest.h>
#include <fmt/core.h>

#include <lib/LibInterface.h>

TEST(ItWorks, Success) {
	fmt::print("Hello from the unit test!\n");
    EXPECT_EQ(1 + 1, 2);
}
