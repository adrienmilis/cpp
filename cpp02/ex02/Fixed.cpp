#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() {

    // std::cout << "Default constructor called" << std::endl;
    this->_fixed_value = 0;
}

Fixed::Fixed(const int nb) {

    // std::cout << "Int constructor called" << std::endl;
    if (nb > 8388608)
    {
        std::cout << "Integer is too big to be converted to fixed point" << std::endl;
        return ;
    }
    this->_fixed_value = nb << this->_bits;
}

Fixed::Fixed(const float fnb) {

    // std::cout << "Float constructor called" << std::endl;
    this->_fixed_value = (int)(roundf(fnb * (1 << this->_bits)));
}

Fixed::Fixed(Fixed const & src) {

    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

float   Fixed::toFloat(void) const {

    return ((float)this->_fixed_value / (float)(1 << Fixed::_bits));
}

int     Fixed::toInt(void) const {

    return (this->_fixed_value >> Fixed::_bits);
}

Fixed::~Fixed() {

    // std::cout << "Destructor called" << std::endl;
}


int Fixed::getRawBits(void) const {

    // std::cout << "getRawBits member function called" << std::endl;
    return this->_fixed_value;
}

void    Fixed::setRawBits(int const raw) {

    // std::cout << "setRawBits member function called" << std::endl;
    this->_fixed_value = raw;
}

Fixed & Fixed::operator=(Fixed const & rhs) {

    // std::cout << "Assignation operator called" << std::endl;
    this->_fixed_value = rhs.getRawBits();

    return *this;
}

std::ostream & operator<<(std::ostream & out, Fixed const & rhs) {

    out << rhs.toFloat();
    return out;
}

bool   Fixed::operator>(Fixed const & rhs) {

    if (this->_fixed_value > rhs._fixed_value)
        return (1);
    return (0);
}

bool   Fixed::operator<(Fixed const & rhs) {

    if (this->_fixed_value < rhs._fixed_value)
        return (1);
    return (0);
}

bool   Fixed::operator>=(Fixed const & rhs) {

    if (this->_fixed_value >= rhs._fixed_value)
        return (1);
    return (0);
}

bool   Fixed::operator<=(Fixed const & rhs) {

    if (this->_fixed_value <= rhs._fixed_value)
        return (1);
    return (0);
}

bool   Fixed::operator==(Fixed const & rhs) {

    if (this->_fixed_value == rhs._fixed_value)
        return (1);
    return (0);
}

bool   Fixed::operator!=(Fixed const & rhs) {

    if (this->_fixed_value != rhs._fixed_value)
        return (1);
    return (0);
}

Fixed   Fixed::operator+(Fixed const & rhs) {

    Fixed   result;

    result.setRawBits(this->_fixed_value + rhs._fixed_value);
    return (result);
}

Fixed   Fixed::operator-(Fixed const & rhs) {

    Fixed   result;

    result.setRawBits(this->_fixed_value - rhs._fixed_value);
    return (result);
}

Fixed   Fixed::operator*(Fixed const & rhs) {

    float   a = this->toFloat();
    float   b = rhs.toFloat();

    return (Fixed(a * b));
}

Fixed   Fixed::operator/(Fixed const & rhs) {

    float a = this->toFloat();
    float b = rhs.toFloat();

    return (Fixed(a/b));
}

Fixed & Fixed::operator++() {

    // modifies the value so we return a reference to the current instance
    this->_fixed_value += 1;
    return *this;
}

Fixed   Fixed::operator++(int) {

    Fixed   tmp(*this);     // copy constructor;
    
    operator++();   // prefix increment
    return tmp;     // return value before increment
}

Fixed & Fixed::operator--() {

    this->_fixed_value += 1;
    return *this;
}

Fixed   Fixed::operator--(int) {

    Fixed   tmp(*this);     // copy constructor;
    
    operator--();   // prefix decrement
    return tmp;     // return value before decrement
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b){

    if (a._fixed_value < b._fixed_value)
        return (a);
    else
        return (b);
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b){

    if (a._fixed_value > b._fixed_value)
        return (a);
    else
        return (b);
}
