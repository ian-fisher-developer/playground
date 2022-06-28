#include "FizzBuzz.h"

#include <sstream>


FizzBuzz::FizzBuzz()
{

}

FizzBuzz::~FizzBuzz()
{

}

std::string FizzBuzz::say(int i) const
{
    if(i%3 == 0 && i%5 == 0) return "FizzBuzz";
    if(i%3 == 0) return "Fizz";
    if(i%5 == 0) return "Buzz";

    std::stringstream s;
    s << i;
    return s.str();
}

// for( const auto &value : values ){ std::cout << value; }
//
// std::vector<S> v3{ {"Norah", 2.7}, {"Frank", 3.5}, {"Jeri", 85.9} }; // vector of vectors, brace initialization
//
// void printx2(int a){cout << a * 2 << " ";}
// for_each(arr1.begin(), arr1.end(), printx2);
//
// struct Class2{ void operator() (int a){cout << a * 3 << " ";}} ob1;
// for_each(arr1.begin(), arr1.end(), ob1);

