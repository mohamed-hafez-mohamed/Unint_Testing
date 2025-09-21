#include <gtest/gtest.h>
#include "../src/math.hpp"

/*
* Every test file requires this function.
* setUp() is called by the generated runner before each test case.
*/
void setUp(void)
{
   
}


class MathTest : public ::testing::Test {
protected:
Math math; // Instance of the Math class to be used in tests
    
};

TEST_F(MathTest, Sum)
{
   // Arrange
   uint32_t result = 0,x = 5, y = 4, z = 9;
   // Act
   result = math.Sum(x, y);
   // Assert
   EXPECT_EQ(result, z);

}

TEST_F(MathTest, Subtract)
{
   // Arrange
   uint32_t result = 0,x = 5, y = 4, z = 1;
   // Act
   result = math.Subtract(x, y);
   // Assert
   EXPECT_EQ(result, z);

}

TEST_F(MathTest, Multiply)
{
   // Arrange
   uint32_t result = 0,x = 5, y = 4, z = 20;
   // Act
   result = math.Multiply(x, y);
   // Assert
   EXPECT_EQ(result, z);

}

TEST_F(MathTest, Divide_normal)
{
   // Arrange
   uint32_t result = 0,x = 20, y = 5, z = 4;
   // Act
   result = math.Divide(x, y);
   // Assert
   EXPECT_EQ(result, z);
}

TEST_F(MathTest, Divide_exceptin)
{
   // Arrange
   uint32_t x = 10, y = 0;
   // Act and Assert
   EXPECT_THROW(math.Divide(x, y), std::invalid_argument);
}

int main()
{
	::testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}
