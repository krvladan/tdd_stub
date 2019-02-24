#include "gtest/gtest.h"
#include "game.h"

namespace
{

class BowlingGameTest: public testing::Test
{
  void SetUp() override
  {

  }
};

TEST_F(BowlingGameTest, GutterGame)
{
  Game g;
}

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
