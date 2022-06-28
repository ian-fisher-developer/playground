#include "../src/FizzBuzz.h"
#include <gtest/gtest.h>

TEST(FizzBuzz, SaysOne)
{
    FizzBuzz player;
    EXPECT_EQ("1", player.say(1));
}

TEST(FizzBuzz, SaysTwo)
{
    FizzBuzz player;
    EXPECT_EQ("2", player.say(2));
}

TEST(FizzBuzz, SaysThree)
{
    FizzBuzz player;
    EXPECT_EQ("Fizz", player.say(3));
}

TEST(FizzBuzz, SaysFive)
{
    FizzBuzz player;
    EXPECT_EQ("Buzz", player.say(5));
}

TEST(FizzBuzz, SaysSix)
{
    FizzBuzz player;
    EXPECT_EQ("Fizz", player.say(6));
}

TEST(FizzBuzz, SaysTen)
{
    FizzBuzz player;
    EXPECT_EQ("Buzz", player.say(10));
}

TEST(FizzBuzz, SaysFifteen)
{
    FizzBuzz player;
    EXPECT_EQ("FizzBuzz", player.say(15));
}
