#ifndef FizzBuzz_H
#define FizzBuzz_H

#include <string>


class FizzBuzz
{
public:
    FizzBuzz();
    ~FizzBuzz();
    std::string say(int) const;

private:
    FizzBuzz(const FizzBuzz &) = delete;
    FizzBuzz &operator=(const FizzBuzz &) = delete;
    FizzBuzz(FizzBuzz &&) = delete;
    FizzBuzz &operator=(FizzBuzz &&) = delete;
}; // class FizzBuzz

#endif // FizzBuzz_H
