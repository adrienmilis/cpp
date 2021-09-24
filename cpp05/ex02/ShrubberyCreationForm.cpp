#include <fstream>
#include "ShrubberyCreationForm.hpp"

// COPLIENNE
ShrubberyCreationForm::ShrubberyCreationForm() : Form("shrubbery form", 145, 137) {

    this->_target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery form", 145, 137), _target(target) {

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & sc_form) : Form(sc_form.getName(), sc_form.getMinGradeToSign(), sc_form.getMinGradeToRun()), _target(sc_form._target) {

    this->setIsSigned(sc_form.getIsSigned());
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {

    this->_target = rhs._target;
    this->setIsSigned(rhs.getIsSigned());
    return *this;
}

// GETTER
std::string ShrubberyCreationForm::getTarget(void) const {

    return this->_target;
}

// FUNCTIONS
void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

    std::string tree = "       _-_\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\  _-     -_  /\n   ~  \\\\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\\";      // \\";

    // throws an exception if form can't be executed
    this->check_execute(executor, *this);
    
    std::ofstream   ofs(this->_target + "_shrubbery");
    ofs << tree << std::endl;
    ofs << tree << std::endl;
    ofs.close();
    return ;
}