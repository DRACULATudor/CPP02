#include "Fixed.hpp"


Fixed::Fixed() : Fix(0){
    static const int FixBits = 8;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy){ //copy construct which does same tthing as the default constructor should also do
    std::cout << "Copy constructor called" << std::endl;
    this->Fix = copy.Fix;
}

Fixed &Fixed::operator=(const Fixed &copiy){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copiy) // CHECK FOR obj not beesing assigend to itself
            Fix = copiy.Fix;
    return *this; // return w * to allow multiple assignments ex. a = b = c
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void){
    std::cout << "getRawBits member function called" << std::endl;
    return(this->Fix);
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    Fix = raw;
}
