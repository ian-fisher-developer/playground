#include "FizzBuzzAdvanced.h"

#include <sstream>

FizzBuzzAdvanced::FizzBuzzAdvanced()
{}

FizzBuzzAdvanced::~FizzBuzzAdvanced()
{}

std::string FizzBuzzAdvanced::say(int i) const
{
    if(i%3 == 0 && i%5 == 0) return "FizzBuzzAdvanced";
    if(i%3 == 0) return "Fizz";
    if(i%5 == 0) return "Buzz";

    std::stringstream s;
    s << i;
    return s.str();
}
