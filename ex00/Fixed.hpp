#pragma once

#include <iomanip>
#include <iostream>

// A default constructor that initializes the fixed-point number value to 0.
//  A copy constructor.
//  A copy assignment operator overload.
//  A destructor.
//  A member function int getRawBits( void ) const; that returns the raw value of the fixed-point value.
//  A member function void setRawBits( int const raw ); that sets the raw value of the fixed-point number.

// Default constructor
// Copy constructor
// Copy assignment operator
// Destructor

class Fixed
{
private:
    int Fix;
    static const int FixBits;

public:
    Fixed();
    Fixed(const Fixed &copy);
    Fixed &operator=(const Fixed &copiy);
    ~Fixed();
    int getRawBits(void);
    void setRawBits(int const raw);
};
