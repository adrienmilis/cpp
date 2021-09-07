#include "Fixed.hpp"

Fixed::Fixed() {

    std::cout << "Default constructor called" << std::endl;
    this->_fixed_value = 0;
}

Fixed::Fixed(Fixed const & src) {

    std::cout << "Copy constructor called" << std::endl;
    // l'instance courante est assignee a la reference (pointeur déréférencé sur l'autre objet)
    *this = src;
    return ;
}

Fixed::~Fixed() {

    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs) {

    std::cout << "Assignation operator called" << std::endl;
    this->_fixed_value = rhs.getRawBits();

    return *this;
}

int Fixed::getRawBits(void) const {

    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixed_value;
}

void    Fixed::setRawBits(int const raw) {

    std::cout << "setRawBits member function called" << std::endl;
    this->_fixed_value = raw;
}