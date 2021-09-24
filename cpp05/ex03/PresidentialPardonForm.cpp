#include "PresidentialPardonForm.hpp"

// COPLIENNE
PresidentialPardonForm::PresidentialPardonForm() : Form("pardon form", 25, 5) {

    this->_target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("pardon form", 25, 5), _target(target) {

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & sc_form) : Form(sc_form.getName(), sc_form.getMinGradeToSign(), sc_form.getMinGradeToRun()), _target(sc_form._target) {

    this->setIsSigned(sc_form.getIsSigned());
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {

    this->_target = rhs._target;
    this->setIsSigned(rhs.getIsSigned());
    return *this;
}

// GETTER
std::string PresidentialPardonForm::getTarget(void) const {

    return this->_target;
}

// FUNCTIONS
void    PresidentialPardonForm::execute(Bureaucrat const & executor) const {

    // throws an exception if form can't be executed
    this->check_execute(executor, *this);
    
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}