#include "AAnimal.hpp"

AAnimal::AAnimal() {

    this->type = "Animal";
    std::cout << "Animal created." << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type) {
    
}

AAnimal::~AAnimal() {

    std::cout << "Animal destroyed." << std::endl;
}

std::string AAnimal::getType() const {

    return (this->type);
}

void        AAnimal::makeSound() const {

}