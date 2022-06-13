#include "gtest/gtest.h"


int main(int argc, char** argv)
{
  std::cout << "Hello" << std::endl;
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
