#pragma once

#include <iomanip>
#include <unistd.h>
#include <cctype>
#include <iostream>
#include <cmath>


class Fixed
{
private:
    int Fix;
    static const int FixBits = 8;

public:
    Fixed();
    Fixed(const Fixed &copy);
    Fixed(const int Point);
    Fixed(const float FlPoint);
    Fixed &operator=(const Fixed &copiy);
    float toFloat(void) const;
    int toInt(void) const;
    // int getRawBits(void);
    // void setRawBits(int const raw);
    friend std::ostream &operator<<(std::ostream &out, const Fixed &obj);
    ~Fixed();
};
