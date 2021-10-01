#include "iter.hpp"
#include <iostream>

void    func(int & i)
{
    i += 1;
}

int main(void)
{
    int *tab = new int [5];
    void (*f1)(int &) = &func;

    std::cout << "===WITH INT TAB===" << std::endl;
    std::cout << "TAB BEFORE" << std::endl;
    for (int i = 0; i < 5; i++)
        tab[i] = i;

    for (int i = 0 ; i < 5 ; i++)
        std::cout << tab[i] << std::endl;

    iter(&tab, 5, f1);
    
    std::cout << "TAB AFTER" << std::endl;
    for (int i = 0 ; i < 5 ; i++)
        std::cout << tab[i] << std::endl;
    delete [] tab;

    std::cout << "===WITH STR TAB===" << std::endl;
    std::string *str_tab = new std::string [3];

    str_tab[0] = "garbanzo beans";
    str_tab[1] = "black beans";
    str_tab[2] = "sweet chili pepper";

    iter(&str_tab, 3, &display);

    delete [] str_tab;

    std::cout << "===WITH FLOATS===" << std::endl;
    float   *ftab = new float [4];

    ftab[0] = 0.5f;
    ftab[1] = 1.5f;
    ftab[2] = 2.5f;
    ftab[3] = 3.5f;
    iter<float>(&ftab, 4, &display);
    
    delete [] ftab;
    return (0);
}