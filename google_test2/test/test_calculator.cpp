#include <gtest/gtest.h>
#include "../src/calculator.h"

class CalculatorTest : public ::testing::Test {
protected:
    Calculator calc;
};

// Test addition
TEST_F(CalculatorTest, AdditionTest) {
    EXPECT_EQ(calc.add(2, 3), 5);
    EXPECT_EQ(calc.add(-1, 1), 0);
    EXPECT_EQ(calc.add(0, 0), 0);
    EXPECT_EQ(calc.add(-5, -3), -8);
}

// Test subtraction
TEST_F(CalculatorTest, SubtractionTest) {
    EXPECT_EQ(calc.subtract(10, 3), 7);
    EXPECT_EQ(calc.subtract(5, 5), 0);
    EXPECT_EQ(calc.subtract(-2, -5), 3);
    EXPECT_EQ(calc.subtract(0, 10), -10);
}

// Test multiplication
TEST_F(CalculatorTest, MultiplicationTest) {
    EXPECT_EQ(calc.multiply(4, 5), 20);
    EXPECT_EQ(calc.multiply(-3, 7), -21);
    EXPECT_EQ(calc.multiply(0, 100), 0);
    EXPECT_EQ(calc.multiply(-4, -6), 24);
}

// Test division
TEST_F(CalculatorTest, DivisionTest) {
    EXPECT_DOUBLE_EQ(calc.divide(10, 2), 5.0);
    EXPECT_DOUBLE_EQ(calc.divide(-15, 3), -5.0);
    EXPECT_DOUBLE_EQ(calc.divide(7, 2), 3.5);
    
    // Test division by zero throws exception
    EXPECT_THROW(calc.divide(5, 0), std::invalid_argument);
}

// Test prime number detection
TEST_F(CalculatorTest, PrimeTest) {
    // Test prime numbers
    EXPECT_TRUE(calc.isPrime(2));
    EXPECT_TRUE(calc.isPrime(3));
    EXPECT_TRUE(calc.isPrime(5));
    EXPECT_TRUE(calc.isPrime(7));
    EXPECT_TRUE(calc.isPrime(11));
    EXPECT_TRUE(calc.isPrime(17));
    EXPECT_TRUE(calc.isPrime(23));
    
    // Test non-prime numbers
    EXPECT_FALSE(calc.isPrime(1));
    EXPECT_FALSE(calc.isPrime(4));
    EXPECT_FALSE(calc.isPrime(6));
    EXPECT_FALSE(calc.isPrime(8));
    EXPECT_FALSE(calc.isPrime(9));
    EXPECT_FALSE(calc.isPrime(15));
    EXPECT_FALSE(calc.isPrime(21));
    
    // Test edge cases
    EXPECT_FALSE(calc.isPrime(0));
    EXPECT_FALSE(calc.isPrime(-5));
}

// Test multiple operations together
TEST_F(CalculatorTest, CombinedOperationsTest) {
    int sum = calc.add(5, 3);
    int product = calc.multiply(sum, 2);
    double quotient = calc.divide(product, 4);
    
    EXPECT_EQ(sum, 8);
    EXPECT_EQ(product, 16);
    EXPECT_DOUBLE_EQ(quotient, 4.0);
}