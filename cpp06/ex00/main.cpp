#include <iostream>

void    detect_type() {}

int main(int argc, char **argv) 
{
    if (argc != 2)
    {
        std::cout << "1 argument required" << std::endl;
        return (0);
    }

    // 1. detecter le type du litteral : char, int, float ou double
    // 2. acquerir le litteral dans le bon type (pour que ce ne soit plus une chaine)
    // 3. le convertir excplicitement en chqcun des trois autres types et afficher le resultat
}