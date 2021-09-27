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

    std::cout << "===TEST1===" << std::endl;
    rrf = someRandomIntern.makeForm("robotomy form", "Bender");
    tom.signForm(*rrf);
    tom.executeForm(*rrf);

    delete rrf;
    rrf = NULL;

    std::cout << "===TEST2===" << std::endl;
    rrf = someRandomIntern.makeForm("pardon form", "Bender");
    if (rrf)
    {
        tom.signForm(*rrf);
        tom.executeForm(*rrf);
    }

    delete rrf;
    rrf = NULL;

    std::cout << "===TEST3===" << std::endl;
    rrf = someRandomIntern.makeForm("shrubbery form", "Bender");
    if (rrf)
    {
        tom.signForm(*rrf);
        tom.executeForm(*rrf);
    }

    delete rrf;
    rrf = NULL;

    std::cout << "===TEST4===" << std::endl;
    rrf = someRandomIntern.makeForm("just a random form", "Bender");

    return (0);
}