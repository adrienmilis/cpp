#include <iostream>
#include "Fixed.hpp"

int main(void) {

    Fixed   a(10);
    Fixed   b(8.25f);
    
    std::cout << std::endl << "=== OPERATEURS DE COMPARAISON ===" << std::endl;
    std::cout << "> operator : should be 1 --> " << (a > b) << std::endl;
    std::cout << "< operator : should be 0 --> " << (a < b) << std::endl;
    std::cout << ">= operator : should be 1 --> " << (a >= b) << std::endl;
    std::cout << "<= operator : should be 0 --> " << (a <= b) << std::endl;
    std::cout << "== operator : should be 0 --> " << (a == b) << std::endl;
    std::cout << "!= operator : should be 1 --> " << (a != b) << std::endl;
    std::cout << std::endl;

    std::cout << "=== OPERATEURS ARITHMETIQUES ===" << std::endl;
    std::cout << "Addition - should be 18.25: " << a + b << std::endl;
    std::cout << "Substraction - should be 1.75: " << a - b << std::endl;
    std::cout << "Multiplication - should be 82.5: " << a * b << std::endl;
    std::cout << "Division - should be 1.21094: " << a / b << std::endl;
    std::cout << std::endl;

    a.setRawBits(0);
    
    std::cout << "=== INCREMENT/DECREMENT ===" << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    Fixed const c(Fixed(5.05f) * Fixed(2));

    std::cout << c << std::endl;
    std::cout << std::endl;

    std::cout << "=== MIN/MAX ===" << std::endl;
    std::cout << Fixed::max(a, c) << std::endl;
    std::cout << Fixed::min(a,c) << std::endl;

    return (0);
}