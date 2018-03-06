#include <gtest/gtest.h>

#include "FizzBuzz.h"

TEST(FizzBuzz, testNormalNumber) {
	ASSERT_EQ("1", FizzBuzz::fizzBuzz(1));
	ASSERT_EQ("2", FizzBuzz::fizzBuzz(2));
}

TEST(FizzBuzz, testFizz) {
	ASSERT_EQ("Fizz", FizzBuzz::fizzBuzz(3));
}

TEST(FizzBUzz, testBuzz) {
	ASSERT_EQ("Buzz", FizzBuzz::fizzBuzz(5));
}

TEST(FizzBUzz, testFizzBuzz) {
	ASSERT_EQ("FizzBuzz", FizzBuzz::fizzBuzz(15));
}
