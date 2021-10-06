#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
#include <typeinfo>

int main(void)
{
    std::list<int>  lst;

    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    std::list<int>::iterator    it;

    it = std::max_element(lst.begin(), lst.end());
    std::cout << "max element of list:" << *it << std::endl;

    std::cout << "***INSERT TEST***" << std::endl;
    std::vector<int>    v(3);

    v[0] = 1;
    v[1] = 2;
    v[2] = 3;

    std::vector<int>::iterator  vit = v.begin();
    std::vector<int>::iterator  vite = v.end();
    // inserts inserts all the elements between first and last,
    // including first but not last
    lst.insert(lst.end(), vit, vite);
    it = lst.begin();
    std::cout << "list:" << std::endl;
    for (int i = 0; i < lst.size() ; i++)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << "***DISTANCE TEST***" << std::endl;
    std::cout << "distance between vector begin and end:" << std::endl;
    // shows us that distance is the number of elements in vector
    std::cout << std::distance(vit, vite) << std::endl;
    std::cout << "std::distance type: " << typeid(std::distance(vit, vite)).name() << std::endl;

    std::cout << "***Check how to access begin and end of a list***" << std::endl;
    std::list<int>::iterator    lit = lst.begin();
    std::list<int>::iterator    lite = lst.end();

    std::cout << *lit << std::endl;
    std::cout << *(--lite) << std::endl;
    return (0);
}