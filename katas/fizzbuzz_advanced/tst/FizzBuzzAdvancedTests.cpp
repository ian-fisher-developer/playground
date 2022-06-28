#include "../src/FizzBuzzAdvanced.h"
#include <gtest/gtest.h>

TEST(FizzBuzzAdvanced, SaysOne)
{
    FizzBuzzAdvanced player;
    EXPECT_EQ("1", player.say(1));
}

TEST(FizzBuzzAdvanced, SaysTwo)
{
    FizzBuzzAdvanced player;
    EXPECT_EQ("2", player.say(2));
}

TEST(FizzBuzzAdvanced, SaysThree)
{
    FizzBuzzAdvanced player;
    EXPECT_EQ("Fizz", player.say(3));
}

TEST(FizzBuzzAdvanced, SaysFive)
{
    FizzBuzzAdvanced player;
    EXPECT_EQ("Buzz", player.say(5));
}

TEST(FizzBuzzAdvanced, SaysSix)
{
    FizzBuzzAdvanced player;
    EXPECT_EQ("Fizz", player.say(6));
}

TEST(FizzBuzzAdvanced, SaysTen)
{
    FizzBuzzAdvanced player;
    EXPECT_EQ("Buzz", player.say(10));
}

TEST(FizzBuzzAdvanced, SaysThirteen)
{
    FizzBuzzAdvanced player;
    EXPECT_EQ("Fizz", player.say(13));
}

TEST(FizzBuzzAdvanced, SaysFifteen)
{
    FizzBuzzAdvanced player;
    EXPECT_EQ("FizzBuzzAdvanced", player.say(15));
}
