#include <iostream>
#include "Form.hpp"

int main(void)
{
    // should be fine
    std::cout << "===TEST1===" << std::endl;
    Form        form1("form1", 10, 10);
    Bureaucrat  tom("Tom", 9);

    try
    {
        std::cout << form1 << std::endl;
        tom.signForm(form1);
        std::cout << form1 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    // richard's grade is too low
    std::cout << "===TEST2===" << std::endl;
    Form        form2("form2", 10, 10);
    Bureaucrat  richard("Richard", 100);

    richard.signForm(form2);

    // form is already signed
    std::cout << "===TEST3===" << std::endl;
    Form        form3("form3", 10, 10);
    Bureaucrat  bernard("Bernard", 5);

    bernard.signForm(form3);
    bernard.signForm(form3);

    // sign grade is too low
    std::cout << "===TEST4===" << std::endl;
    try
    {
        Form form4("form4", 160, 5);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    // sign grade is too high
    std::cout << "===TEST5===" << std::endl;
    try
    {
        Form form5("form5", 0, 5);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    // run grade is too low
    std::cout << "===TEST6===" << std::endl;
    try
    {
        Form form6("form6", 5, 160);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    // run grade is too high
    std::cout << "===TEST7===" << std::endl;
    try
    {
        Form form7("form7", 5, 0);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return (0);
}