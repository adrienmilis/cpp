#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *  generate(void)
{
    int     n;

    n = rand() % 3;
    if (n == 0)
    {
        std::cout << "A created" << std::endl;
        return (new A());
    }
    else if (n == 1)
    {
        std::cout << "B created" << std::endl;
        return (new B());
    }
    else
    {
        std::cout << "C created" << std::endl;
        return (new C());
    }
}

void    identify(Base * p)
{
    A *a = dynamic_cast<A*>(p);
    if (a != NULL) {
        std::cout << "A" << std::endl;
        return ;
    }

    B *b = dynamic_cast<B*>(p);
    if (b != NULL) {
        std::cout << "B" << std::endl;
        return;
    }

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
        return ;
    }
    catch (std::bad_cast & bc) {}

    try {
        B & b = dynamic_cast<B &>(p);
        B b_bis = b;
        std::cout << "B" << std::endl;
        return ;
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
        delete base_ptr;
        std::cout << std::endl;
    }
    return (0);
}
