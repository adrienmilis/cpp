#include <algorithm>
#include <iostream>
#include <list>

int main(void)
{
    std::list<int>  lst;

    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    std::list<int>::iterator    it;

    it = std::max_element(lst.begin(), lst.end());
    std::cout << *it << std::endl;
}