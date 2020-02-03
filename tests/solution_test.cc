#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Swap, HandlesSwap) {
  Solution solution;
  int x = 20;
  int y = 30;
  solution.SwapReference(x,y);
  int actual_x1 = x;
  int actual_y1 = y;
  solution.SwapPointer(&x,&y);
  int actual_x2 = x;
  int actual_y2 = y;
  EXPECT_EQ(actual_x1, 30);
  EXPECT_EQ(actual_y1, 20);
  EXPECT_EQ(actual_x2, 20);
  EXPECT_EQ(actual_y2, 30);
}
