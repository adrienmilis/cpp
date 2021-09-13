#include "Brain.hpp"

Brain::Brain() {

    std::cout << "Brain created" << std::endl;
}

Brain::~Brain() {

	std::cout << "Brain destroyed" << std::endl;
}

std::string Brain::getIdea(int index) {

    return this->_ideas[index];
}

void        Brain::setIdea(int index, std::string new_idea) {

    this->_ideas[index] = new_idea;
}
