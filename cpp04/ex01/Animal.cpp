#include "Animal.hpp"

Animal::Animal() {

    this->type = "Animal";
    std::cout << "Animal created." << std::endl;
}

Animal::~Animal() {

    std::cout << "Animal destroyed." << std::endl;
}

std::string Animal::getType() const {

    return (this->type);
}

void        Animal::makeSound() const {

    std::cout << "Whatever sound an animal makes" << std::endl;
}