#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() {

    std::cout << "Default constructor called" << std::endl;
    this->_fixed_value = 0;
}

Fixed::Fixed(const int nb) {

    std::cout << "Int constructor called" << std::endl;
    if (nb > 8388608)
    {
        std::cout << "Integer is too big to be converted to fixed point" << std::endl;
        return ;
    }
    this->_fixed_value = nb << this->_bits;
}

Fixed::Fixed(const float fnb) {

    std::cout << "Float constructor called" << std::endl;
    this->_fixed_value = (int)(roundf(fnb * (1 << this->_bits)));
    // max float that can be converted ?
}

Fixed::Fixed(Fixed const & src) {

    std::cout << "Copy constructor called" << std::endl;
    // l'instance courante est assignee a la reference (pointeur déréférencé sur l'autre objet)
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

    std::cout << "Destructor called" << std::endl;
}


int Fixed::getRawBits(void) const {

    // std::cout << "getRawBits member function called" << std::endl;
    return this->_fixed_value;
}

void    Fixed::setRawBits(int const raw) {

    std::cout << "setRawBits member function called" << std::endl;
    this->_fixed_value = raw;
}

Fixed & Fixed::operator=(Fixed const & rhs) {

    std::cout << "Assignation operator called" << std::endl;
    this->_fixed_value = rhs.getRawBits();

    return *this;
}

std::ostream & operator<<(std::ostream & out, Fixed const & rhs) {

    out << rhs.toFloat();
    return out;
}