#ifndef FizzBuzzAdvanced_H
#define FizzBuzzAdvanced_H

#include <string>

class FizzBuzzAdvanced
{

public:
    FizzBuzzAdvanced();
    ~FizzBuzzAdvanced();
    std::string say(int) const;

private:
    FizzBuzzAdvanced(const FizzBuzzAdvanced &) = delete;
    FizzBuzzAdvanced &operator=(const FizzBuzzAdvanced &) = delete;
    FizzBuzzAdvanced(FizzBuzzAdvanced &&) = delete;
    FizzBuzzAdvanced &operator=(FizzBuzzAdvanced &&) = delete;

}; // class FizzBuzzAdvanced

#endif // FizzBuzzAdvanced_H
