#include "FizzBuzz.h"

#include <sstream>

FizzBuzz::FizzBuzz()
{}

FizzBuzz::~FizzBuzz()
{}

std::string FizzBuzz::say(int i) const
{
    if(i%3 == 0 && i%5 == 0) return "FizzBuzz";
    if(i%3 == 0) return "Fizz";
    if(i%5 == 0) return "Buzz";

    std::stringstream s;
    s << i;
    return s.str();
}
