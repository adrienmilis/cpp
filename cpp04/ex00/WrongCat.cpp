#include "WrongCat.hpp"

WrongCat::WrongCat() {

    this->type = "WrongCat";
    std::cout << "WrongCat created" << std::endl;
}

WrongCat::~WrongCat() {

	std::cout << "WrongCat destroyed" << std::endl;
}

void    WrongCat::makeSound() const {

    std::cout << "WrongCat sound" << std::endl;
}