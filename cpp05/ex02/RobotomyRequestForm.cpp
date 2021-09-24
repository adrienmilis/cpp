#include "RobotomyRequestForm.hpp"

/*
    -   RobotomyRequestForm (Required grades: sign 72, exec 45). Action: Makes some
        drilling noises, and tell us that <target> has been robotomized successfully 50% of
        the time. Otherwise, tell us it’s a failure
*/

// COPLIENNE
RobotomyRequestForm::RobotomyRequestForm() : Form("robotomy form", 72, 45) {

    this->_target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy form", 72, 45), _target(target) {

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & sc_form) : Form(sc_form.getName(), sc_form.getMinGradeToSign(), sc_form.getMinGradeToRun()), _target(sc_form._target) {

    this->setIsSigned(sc_form.getIsSigned());
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {

    this->_target = rhs._target;
    this->setIsSigned(rhs.getIsSigned());
    return *this;
}

// GETTER
std::string RobotomyRequestForm::getTarget(void) const {

    return this->_target;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const {

    // throws an exception if form can't be executed
    this->check_execute(executor, *this);

    std::cout << "ZZZZZZZZZZ *drilling noise* ZZZZZZZZZZ" << std::endl;
    int random;
    srand(time(0));
    random = rand() % 2;
    if (random == 0)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->_target << "'s robotomization failed" << std::endl;
}