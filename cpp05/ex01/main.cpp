#include "Form.hpp"

int main(void)
{
    // should be fine
    Form        form1("form1", false, 10, 10);
    Bureaucrat  tom("Tom", 9);

    try
    {
        tom.signForm(form1);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    // richard's grade is too low
    Form        form2("form2", false, 10, 10);
    Bureaucrat  richard("Richard", 100);

    try
    {
        richard.signForm(form2);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    // form is already signed
    Form        form3("form3", true, 10, 10);
    Bureaucrat  bernard("Bernard", 5);

    try
    {
        bernard.signForm(form3);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    // sign grade is too low
    try
    {
        Form form4("form4", false, 160, 5);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    // sign grade is too high
    try
    {
        Form form4("form4", false, 0, 5);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    // run grade is too low
    try
    {
        Form form4("form4", false, 5, 160);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    // run grade is too high
    try
    {
        Form form4("form4", false, 5, 0);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return (0);
}