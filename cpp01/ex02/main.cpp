#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    // display the address in memory of str
    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    // display the contents of str
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    
    return (0);

}