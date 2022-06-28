#include "../src/FizzBuzzAdvanced.h"
#include <vector>
#include <gtest/gtest.h>


class FizzBuzzAdvancedTest : public ::testing::TestWithParam<std::pair<int, std::string>>
{
protected:
    FizzBuzzAdvanced player;

}; // class FizzBuzzAdvandedTest


TEST_P(FizzBuzzAdvancedTest, SaysResponse)
{
    EXPECT_EQ(GetParam().second, player.say(GetParam().first));
}


namespace { // unnamed namespace

typedef std::pair<int, std::string> io_t;
typedef std::vector<io_t> spec_t;

spec_t initializeSpecification()
{
    return spec_t{io_t(1, "1"), io_t(2, "2"), io_t(3, "FizzFizz"),
                io_t(5, "Buzz"), io_t(6, "Fizz"), io_t(10, "Buzz"),
                io_t(13, "Fizz"), io_t(15, "FizzBuzz"), io_t(30, "FizzFizzBuzz"),
                io_t(31, "Fizz"), io_t(32, "Fizz"), io_t(33, "FizzFizzFizz"),
                io_t(35, "FizzBuzz"), io_t(36, "FizzFizz"), io_t(39, "FizzFizz"),
                io_t(40, "Buzz"), io_t(60, "FizzBuzz"), io_t(98, "98"),
                io_t(300, "FizzFizzBuzz"), io_t(333, "FizzFizzFizzFizz")
    };
}

const spec_t &specification()
{
    static spec_t inputsAndOutputs;
    if( inputsAndOutputs.empty() ){
        inputsAndOutputs = initializeSpecification();
    }
    return inputsAndOutputs;
}

INSTANTIATE_TEST_SUITE_P(FizzBuzzAdvancedTestSuite, FizzBuzzAdvancedTest, testing::ValuesIn(specification()));

} // unnamed namespace
