#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <iostream>
#include <cstdlib>

Base *  generate(void)
{
    int     n;

    n = rand() % 3;
    if (n == 0)
        return (new A());
    else if (n == 1)
        return (new B());
    else
        return (new C());
}

void    identify(Base * p)
{
    A *a = dynamic_cast<A*>(p);
    if (a != NULL)
        std::cout << "A" << std::endl;

    B *b = dynamic_cast<B*>(p);
    if (b != NULL)
        std::cout << "B" << std::endl;

    C *c = dynamic_cast<C*>(p);
    if (c != NULL)
        std::cout << "C" << std::endl;
}

void    identify(Base & p)
{
    try {
        A & a = dynamic_cast<A &>(p);
        A a_bis = a;
        std::cout << "A" << std::endl;
    }
    catch (std::bad_cast & bc) {}

    try {
        B & b = dynamic_cast<B &>(p);
        B b_bis = b;
        std::cout << "B" << std::endl;
    }
    catch (std::bad_cast & bc) {}

    try {
        C & c = dynamic_cast<C &>(p);
        C c_bis = c;
        std::cout << "C" << std::endl;
    }
    catch (std::bad_cast & bc) {}

}

int main(void)
{
    srand((unsigned int)time(NULL));

    for (int i = 0 ; i < 20 ; i++)
    {
        Base    *base_ptr;
    
        base_ptr = generate();
        identify(base_ptr);
        
        Base    &base_ref = *base_ptr;
        identify(base_ref);
        std::cout << std::endl;
    }
    return (0);
}
