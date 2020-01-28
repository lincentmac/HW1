#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintMyInfo();
  std::string expected = "My name is Linxin Mai, EE Master student in USC, interested in software engineering";
  EXPECT_EQ(expected, actual);
}