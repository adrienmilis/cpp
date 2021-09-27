#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Bureaucrat  tom("tom", 1);
    Intern  someRandomIntern;
    Form    *rrf;

    rrf = someRandomIntern.makeForm("robotomy form", "Bender");
    tom.signForm(*rrf);
    tom.executeForm(*rrf);
    delete rrf;
    return (0);
}