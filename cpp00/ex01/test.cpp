#include <string>
#include <iostream>

int main()
{
    std::string str;

    getline(std::cin, str);
    if (str.empty())
        std::cout << "print" << std::endl;

}