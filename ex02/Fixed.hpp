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
    const static int FixBits = 8;

public:
    Fixed();
    Fixed(const Fixed &copy);
    Fixed(const int Point);
    Fixed(const float FlPoint);
    Fixed &operator=(const Fixed &copiy);
    float toFloat(void) const;
    int toInt(void) const;
    bool operator<(const Fixed &copiy) const;
    bool operator>(const Fixed &copiy) const;
    bool operator>=(const Fixed &copiy) const;
    bool operator<=(const Fixed &copiy) const;
    bool operator==(const Fixed &copiy) const;
    bool operator!=(const Fixed &copiy) const;
    Fixed operator*(const Fixed &copiy) const; //
    Fixed operator/(const Fixed &copiy) const; //
    Fixed operator+(const Fixed &copiy) const; //
    Fixed operator-(const Fixed &copiy) const; //
    Fixed &operator++();                       //
    Fixed operator++(int);                     //
    Fixed &operator--();
    Fixed operator--(int);
    static Fixed &min(Fixed &copy, Fixed &numb);
    static Fixed &max(Fixed &copy, Fixed &numb);
    static const Fixed &min(const Fixed &copy,const Fixed &numb);
    static const Fixed &max(const Fixed &copy,const Fixed &numb);
    friend std::ostream &operator<<(std::ostream &out, const Fixed &obj);

    ~Fixed();
};
