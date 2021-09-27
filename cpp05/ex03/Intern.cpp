#include "Intern.hpp"

Intern::Intern() {

}

Intern::Intern(Intern const & src) {

    (void)src;
}

Intern::~Intern() {
	
}

Intern & Intern::operator=(Intern const & rhs) {

    (void)rhs;
    return *this;
}

Form    *Intern::createShrubberyForm(std::string target) const {

    Form    *form = new ShrubberyCreationForm(target);
    
    return (form);
}

Form    *Intern::createRobotomyForm(std::string target) const {

    Form    *form = new RobotomyRequestForm(target);

    return (form);
}

Form    *Intern::createPresidentialForm(std::string target) const {

    Form    *form = new PresidentialPardonForm(target);

    return (form);
}

Form    *Intern::makeForm(std::string form_name, std::string target) const {

    Form    *instance;

    std::string tab[3] = {"shrubbery form", "robotomy form", "pardon form"};
    Form        *(Intern::*x[3])(std::string) const = {&Intern::createShrubberyForm, &Intern::createRobotomyForm, &Intern::createPresidentialForm};

    for (int i = 0; i < 3; i++) {
        if (form_name == tab[i]) {
            instance = (this->*x[i])(target);
            std::cout << "Intern creates " << tab[i] << std::endl;
            return (instance);
        }
    }
    std::cout << "Form is not known" << std::endl;
    return (NULL);
}