#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain()) {

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

    std::cout << "Assignation operator called" << std::endl;
    this->type = rhs.type;
    delete this->_brain;
    this->_brain = new Brain();
    for (int i = 0 ; i < 100; i++) {
        this->_brain->setIdea(i, rhs._brain->getIdea(i));
    }
    return *this;
}
