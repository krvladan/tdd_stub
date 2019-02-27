#include "gtest/gtest.h"

namespace
{

TEST(MyTestCase, EmptyTest)
{

}

}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
