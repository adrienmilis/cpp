#include "Intern.hpp"
#include "Form.hpp"

Intern::Intern() {

}

Intern::Intern(Intern const & src) {

}

Intern::~Intern() {
	
}

Intern & Intern::operator=(Intern const & rhs) {

    // assignation operation

    return *this;
}

void    Intern::makeForm(std::string form_name, std::string target) const {

    std::string tab[3] = {"shrubbery form", "robotomy form", "presidential form"};
    void        (Form::*x[3])(void)

    for (int i = 0; i < 3; i++) {
        
    }
}