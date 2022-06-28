#include "FizzBuzzAdvanced.h"

#include <sstream>
#include <algorithm>


namespace { // unnamed namespace

std::string wordFor3(){ return "Fizz"; }
std::string wordFor5(){ return "Buzz"; }

std::string intString(int i)
{
    std::stringstream s;
    s << i;
    return s.str();
}

std::string fizzEach3Digit(int i)
{
    std::string s = intString(i);
    int n3s = std::count(s.begin(), s.end(), '3');

    std::string fizzes;
    for( int i3s=0; i3s<n3s; ++i3s ){ fizzes += wordFor3(); }
    return fizzes;
}

std::string wordReply(int i)
{
    std::string reply;
    reply += fizzEach3Digit(i);
    if(i%3 == 0) reply += wordFor3();
    if(i%5 == 0) reply += wordFor5();
    return reply;
}

std::string numberReply(int i)
{
    return intString(i);
}

} // unnamed namespace


FizzBuzzAdvanced::FizzBuzzAdvanced()
{}

FizzBuzzAdvanced::~FizzBuzzAdvanced()
{}

std::string FizzBuzzAdvanced::say(int i) const
{
    std::string reply = wordReply(i);
    if(!reply.empty()) return reply;

    return numberReply(i);
}
