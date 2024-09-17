#include "Fixed.hpp"

Fixed::Fixed() : Fix(0)
{
}

Fixed::Fixed(const Fixed &copy)
{
    this->Fix = copy.Fix;
}

Fixed &Fixed::operator=(const Fixed &cop)
{
    if (this != &cop)
    {
        Fix = cop.Fix;
    }
    return *this;
}

Fixed::Fixed(const int point)
{
    Fix = point << FixBits;
}

Fixed::Fixed(const float flPoint)
{
    Fix = roundf(flPoint * (1 << FixBits));
}


int Fixed::toInt() const
{
    return Fix >> FixBits;
}

float Fixed::toFloat() const
{
    return (float)(Fix) / (1 << FixBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return out;
}

bool Fixed::operator<(const Fixed &copiy)const
{
    if (this->Fix < copiy.Fix)
        return true;
    return false;
}

bool Fixed::operator>(const Fixed &copiy)const
{
    if (this->Fix > copiy.Fix)
        return true;
    return false;
}

bool Fixed::operator==(const Fixed &copiy)const
{
    if (this->Fix == copiy.Fix)
        return true;
    return false;
}

bool Fixed::operator!=(const Fixed &copiy)const
{
    if (this->Fix != copiy.Fix)
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed &copiy)const
{
    if (this->Fix <= copiy.Fix)
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed &copiy)const
{
    if (this->Fix >= copiy.Fix)
        return true;
    return false;
}

Fixed Fixed::operator*(const Fixed &copiy)const
{
    return Fixed(this->toFloat() * copiy.toFloat());
}

Fixed Fixed::operator+(const Fixed &copiy)const
{
    return Fixed(this->toFloat() + copiy.toFloat());
}

Fixed Fixed::operator-(const Fixed &copiy)const
{
    return Fixed(this->toFloat() - copiy.toFloat());
}

Fixed Fixed::operator/(const Fixed &copiy)const
{
    return Fixed(this->toFloat() / copiy.toFloat());
}

Fixed  &Fixed::operator++()
{
    Fix++;
    return *this ;
}

Fixed  Fixed::operator++(int)
{
    Fixed temp = *this;
    Fix++;
    return temp;
}

Fixed  &Fixed::operator--()
{
    Fix--;
    return *this ;
}

Fixed  Fixed::operator--(int)
{
    Fixed temp = *this;
    Fix--;
    return temp ;
}

Fixed& Fixed::min(Fixed &min, Fixed &numb)
{
    if (min > numb)
        return numb;
    else 
        return min;
}

const Fixed &Fixed::min(const Fixed &min, const Fixed &num)
{
    if (min > num)
        return num;
    else
        return min;
}

Fixed &Fixed::max(Fixed &max, Fixed &numb)
{
    if (max > numb)
        return max;
    else
        return numb;
    
}

const Fixed &Fixed::max(const Fixed &max, const Fixed &num)
{
    if (max > num)
        return max;
    else
        return num;
}

Fixed::~Fixed()
{
}

Fixed Fixed::abso()const
{
    if (this->toFloat() < 0)
    {
        return -this->toFloat();
    }
    return this->toFloat();
    
}