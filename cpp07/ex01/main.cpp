#include "iter.hpp"
#include <iostream>

int main(void)
{
    int *tab = new int [5];

    std::cout << "===WITH INT TAB===" << std::endl;
    for (int i = 0; i < 5; i++)
        tab[i] = i;

    iter(tab, 5, display);

    delete [] tab;

    std::cout << "===WITH STR TAB===" << std::endl;
    std::string *str_tab = new std::string [3];

    str_tab[0] = "garbanzo beans";
    str_tab[1] = "black beans";
    str_tab[2] = "sweet chili pepper";

    iter(str_tab, 3, &display);

    delete [] str_tab;

    std::cout << "===WITH FLOATS===" << std::endl;
    float   *ftab = new float [4];

    ftab[0] = 0.5f;
    ftab[1] = 1.5f;
    ftab[2] = 2.5f;
    ftab[3] = 3.5f;
    iter<float>(ftab, 4, &display);
    
    delete [] ftab;
    return (0);
}