#include "Dog.hpp"

Dog::Dog() {

    this->type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog created." << std::endl;
}

Dog::~Dog() {

    delete this->_brain;
    std::cout << "Dog destroyed." << std::endl;
}

void    Dog::makeSound() const {

    std::cout << "Woof" << std::endl;
}

// performs a deep copy of Dog
Dog & Dog::operator=(Dog const & rhs) {

    this->type = rhs.type;
    this->_brain = new Brain();
    for (int i = 0 ; i < 100; i++) {
        this->_brain->setIdea(i, rhs._brain->getIdea(i));
    }
    return *this;
}
