#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void    iter(T **t, int len, void (*f)(T & elem))
{
    for (int i = 0; i < len ; i++)
        (*f)((*t)[i]);
}

template<typename T>
void    display(T & t)
{
    std::cout << t << std::endl;
}

#endif