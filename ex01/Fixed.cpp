#include "Fixed.hpp"

Fixed::Fixed() : Fix(0)
{
    std::cout << "Default construcotr called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    this->Fix = copy.Fix;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &cop)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &cop)
    {
        Fix = cop.Fix;
    }
    return *this;
}

Fixed::Fixed(const int point)
{
    std::cout << "Int constructor called" << std::endl;
    Fix = point << FixBits;
}

Fixed::Fixed(const float flPoint)
{
    std::cout << "Float constructors" << std::endl;
    Fix = roundf(flPoint * (1 << FixBits));
}


int Fixed::toInt() const
{
    return Fix >> FixBits;
}

float Fixed::toFloat() const
{
    return static_cast<float>(Fix) / (1 << FixBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return out;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}