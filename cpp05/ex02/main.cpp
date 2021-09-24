#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

/*
    - 3 nouvelles classes derivees
    - ajouter une nvelle exception : form is not signed (when trying to execute) ?
*/

int main(void)
{
    ShrubberyCreationForm   sh("home");

    // form can be executed
    std::cout << "===TEST1===" << std::endl;
    try
    {
        Bureaucrat  tom("tom", 1);
        tom.signForm(sh);
        sh.execute(tom);
        std::cout << "file succesfully created" << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    // bureaucrat's level is too low
    std::cout << "===TEST2===" << std::endl;
    try
    {
        sh.execute(Bureaucrat("tom", 150));
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    // form is not signed
    std::cout << "===TEST3===" << std::endl;
    try
    {
        ShrubberyCreationForm   sh2("planet");
        sh2.execute(Bureaucrat("charles", 1));
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "===TEST4===" << std::endl;
    Bureaucrat  arthur("arthur", 1);
    PresidentialPardonForm  crim("a dangerous criminal");
    arthur.signForm(crim);
    arthur.executeForm(crim);

    std::cout << "===TEST5===" << std::endl;
    RobotomyRequestForm robo("a dissident");
    arthur.signForm(robo);
    arthur.executeForm(robo);

    std::cout << "===TEST6===" << std::endl;
    RobotomyRequestForm robo2("me");
    arthur.executeForm(robo2);

    return (0);
}