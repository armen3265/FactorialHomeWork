#include "factorial.h"
#include "gtest/gtest.h"

namespace{
// Tests factorial of Negative numbers.
TEST(FactorialTest, Negative){
  bool is_error = false;
    try{
         factorial(-5);
    }catch(const std::runtime_error& ex){
         is_error = true;
    }
    EXPECT_TRUE(is_error);
}

//Tests factorial of Zero.
TEST(FactorialTest, Zero){
   EXPECT_EQ(1, factorial(0));
}


// Tests factorial of positive numbers.
TEST(FactorialTest, Positive) {
    EXPECT_EQ(1, factorial(1));
    EXPECT_EQ(2, factorial(2));
    EXPECT_EQ(120, factorial(5));
    EXPECT_EQ(3628800, factorial(10));

 }

} //namespace

int main(int argc, char **argv)
{
     ::testing::InitGoogleTest(&argc,argv);
     return RUN_ALL_TESTS();
}
