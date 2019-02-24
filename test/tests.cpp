#include "gtest/gtest.h"


namespace
{

class MyTestFixture: public testing::Test
{
  void SetUp() override
  {

  }
};

TEST_F(MyTestFixture, test1)
{
  ASSERT_TRUE(true);
}

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
