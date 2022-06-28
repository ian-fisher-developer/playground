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
    EXPECT_EQ("FizzFizz", player.say(3));
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
    EXPECT_EQ("FizzBuzz", player.say(15));
}

TEST(FizzBuzzAdvanced, SaysThirty)
{
    FizzBuzzAdvanced player;
    EXPECT_EQ("FizzFizzBuzz", player.say(30));
}

TEST(FizzBuzzAdvanced, SaysThirtyOne)
{
    FizzBuzzAdvanced player;
    EXPECT_EQ("Fizz", player.say(31));
}

TEST(FizzBuzzAdvanced, SaysThirtyTwo)
{
    FizzBuzzAdvanced player;
    EXPECT_EQ("Fizz", player.say(32));
}

TEST(FizzBuzzAdvanced, SaysThirtyThree)
{
    FizzBuzzAdvanced player;
    EXPECT_EQ("FizzFizzFizz", player.say(33));
}

TEST(FizzBuzzAdvanced, SaysThirtyFive)
{
    FizzBuzzAdvanced player;
    EXPECT_EQ("FizzBuzz", player.say(35));
}

TEST(FizzBuzzAdvanced, SaysThirtySix)
{
    FizzBuzzAdvanced player;
    EXPECT_EQ("FizzFizz", player.say(36));
}

TEST(FizzBuzzAdvanced, SaysThirtyNine)
{
    FizzBuzzAdvanced player;
    EXPECT_EQ("FizzFizz", player.say(39));
}

TEST(FizzBuzzAdvanced, SaysForty)
{
    FizzBuzzAdvanced player;
    EXPECT_EQ("Buzz", player.say(40));
}

TEST(FizzBuzzAdvanced, SaysSixty)
{
    FizzBuzzAdvanced player;
    EXPECT_EQ("FizzBuzz", player.say(60));
}

TEST(FizzBuzzAdvanced, SaysThreeHundred)
{
    FizzBuzzAdvanced player;
    EXPECT_EQ("FizzFizzBuzz", player.say(300));
}
