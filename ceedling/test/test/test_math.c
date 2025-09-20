#include "unity.h"
#include "math.h"

/*
* Every test file requires this function.
* setUp() is called by the generated runner before each test case.
*/
void setUp(void)
{
   
}

/*
* Every test file requires this function.
* tearDown() is called by the generated runner before each test case.
*/
void tearDown(void)
{
   
}

void test_project_Sum(void)
{
   // Arrange
   unsigned int result = 0,x = 5, y = 4, z = 9;
   // Act
   result = Sum(x, y);
   // Assert
   TEST_ASSERT_TRUE(result == z);
}

void test_project_Subtract(void)
{
   // Arrange
   unsigned int result = 0,x = 5, y = 4, z = 1;
   // Act
   result = Subtract(x, y);
   // Assert
   TEST_ASSERT_TRUE(result == z);
}

void test_project_Multiply(void)
{
   // Arrange
   unsigned int result = 0,x = 4, y = 5, z = 20;
   // Act
   result = Multiply(x, y);
   // Assert
   TEST_ASSERT_TRUE(result == z);
}

void test_project_Divide_Case1(void)
{
   // Arrange
   unsigned int result = 0,x = 20, y = 5, z = 4;
   // Act
   result = Divide(x, y);
   // Assert
   TEST_ASSERT_TRUE(result == z);
}

void test_project_Divide_Case2(void)
{
   // Arrange
   unsigned int result = 0,x = 20, y = 0, z = 0;
   // Act
   result = Divide(x, y);
   // Assert
   TEST_ASSERT_TRUE(result == z);
}

