#include "Fixed.hpp"

int main(void)
{
    //Test 1 both obj constant

    // Fixed const a(Fixed(6.02f));
    // Fixed const b(Fixed(5.05f) - (2));
    
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << b * a << std::endl;
    // std::cout << b / a << std::endl;
    // std::cout << b - a << std::endl;
    // std::cout << b + a << std::endl;
    // std::cout << Fixed::min(a, b) << std::endl;
    // std::cout << Fixed::max(a, b) << std::endl;
    

    //Test 2 all operators 1 const obj
    
    // Fixed a(Fixed(10.02f));
    // Fixed const b(Fixed(5.05f) - (2));
    
    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << b * a << std::endl;
    // std::cout << b / a << std::endl;
    // std::cout << b - a << std::endl;
    // std::cout << b + a << std::endl;
    // std::cout << Fixed::min(a, b) << std::endl;
    // std::cout << Fixed::max(a, b) << std::endl;

    // //Test 3 no const obj

    Fixed  a(Fixed(1.442f));
    Fixed  b(Fixed(5.05f) + (42));
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << ++b << std::endl;
    std::cout << b << std::endl;
    std::cout << b++ << std::endl;
    std::cout << b << std::endl;
    std::cout << b * a << std::endl;
    std::cout << b / a << std::endl;
    std::cout << b - a << std::endl;
    std::cout << b + a << std::endl;
    std::cout << Fixed::min(a, b) << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    return 0;
}