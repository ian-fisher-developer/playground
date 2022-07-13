#include "../src/FizzBuzzAdvanced.h"
#include <vector>
#include <gtest/gtest.h>


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

} // unnamed namespace


class FizzBuzzAdvancedTestSuite : public ::testing::TestWithParam<io_t>
{
protected:
    FizzBuzzAdvanced player;

}; // class FizzBuzzAdvancedTestSuite


TEST_P(FizzBuzzAdvancedTestSuite, SaysResponse)
{
    io_t io = GetParam();
    auto i = io.first;
    auto expected = io.second;
    EXPECT_EQ(expected, player.say(i));
}


namespace { // unnamed namespace

std::string testName(const testing::TestParamInfo<FizzBuzzAdvancedTestSuite::ParamType>& info)
{
    io_t io = info.param;
    std::stringstream ss;
    ss << io.first;
    return ss.str();
}

INSTANTIATE_TEST_SUITE_P(FizzBuzzAdvancedTestGroup, FizzBuzzAdvancedTestSuite,
                         testing::ValuesIn(specification()), testName);

} // unnamed namespace
