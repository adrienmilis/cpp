#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
    try
    {
        Bureaucrat tom("Tom", 200);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
    
    Bureaucrat richard("Richard", 2);

    try
    {
        std::cout << richard << std::endl;
        richard.grade_increment();
        std::cout << richard << std::endl;
        richard.grade_increment();
        std::cout << richard << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}