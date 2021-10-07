#include <iostream>
#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    std::cout << "top number: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "stack size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);     // 5 3 5 737 0
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "stack 1 content:" << std::endl;
    while (it != ite)
    {
        std::cout << '\t' << *it << std::endl;
        ++it;
    }
    MutantStack<int>    ms2(mstack);
    MutantStack<int>::iterator it2 = ms2.begin();
    MutantStack<int>::iterator ite2 = ms2.end();
    ++it2;
    --it2;
    std::cout << std::endl << "stack 2 content:" << std::endl;
    while (it2 != ite2)
    {
        std::cout << '\t' << *it2 << std::endl;
        ++it2;
    }
    std::cout << "stack 2 size: " << ms2.size() << std::endl;
    std::cout << "stack 2 top number: " << ms2.top() << std::endl;

    MutantStack<int>    ms3;

    std::cout << std::endl << "ms3 empty ? " << ms3.empty() << std::endl;
    ms3 = ms2;
    ms3.push(2147483647);
    MutantStack<int>::iterator it3 = ms3.begin();
    MutantStack<int>::iterator ite3 = ms3.end();
    ++it3;
    --it3;
    std::cout << "stack 3 content:" << std::endl;
    while (it3 != ite3)
    {
        std::cout << '\t' << *it3 << std::endl;
        ++it3;
    }
    std::cout << "stack 3 size: " << ms3.size() << std::endl;
    std::cout << "stack 3 top number: " << ms3.top() << std::endl;
    std::cout << "ms3 empty ? " << ms3.empty() << std::endl;

    MutantStack<std::string> ms4;

    ms4.push("garbanzo beans");
    ms4.push("hot chili pepper");
    ms4.push("salsa");
    ms4.push("jalapenos");
    ms4.pop();
    MutantStack<std::string>::iterator  s_it = ms4.begin();
    MutantStack<std::string>::iterator  s_ite = ms4.end();
    
    std::cout << std::endl << "stack 4 content:" << std::endl;
    while (s_it != s_ite) {
        std::cout << '\t' << *s_it << std::endl;
        ++s_it;
    }
    return 0;
}