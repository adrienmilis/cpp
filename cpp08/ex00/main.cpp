#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include "easyfind.hpp"

int main(void)
{
    std::vector<int> v(5);

    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    v[3] = 4;
    v[4] = 2;
    std::cout << "*** VECTOR ***" << std::endl;
    std::cout << easyfind(v, 2) << std::endl;
    std::cout << easyfind(v, 17) << std::endl;

    std::list<int>  lst;

    lst.push_back(1);
    lst.push_back(5);
    lst.push_back(7);
    std::cout << "*** LIST ***" << std::endl;
    std::cout << easyfind(lst, 7) << std::endl;
    std::cout << easyfind(lst, 17) << std::endl;

    std::deque<int> dq;
    dq.push_back(1);
    dq.push_back(5);
    dq.push_back(7);
    std::cout << "*** DEQUE ***" << std::endl;
    std::cout << easyfind(dq, 7) << std::endl;
    std::cout << easyfind(dq, 32) << std::endl;
    
    std::set<int>   st;
    st.insert(10);
    st.insert(20);
    st.insert(30);
    std::cout << "*** SET ***" << std::endl;
    std::cout << easyfind(st, 20) << std::endl;
    std::cout << easyfind(st, 40) << std::endl;

    std::multiset<int>  mst;
    mst.insert(10);
    mst.insert(20);
    mst.insert(30);
    std::cout << "*** MULTISET ***" << std::endl;
    std::cout << easyfind(st, 20) << std::endl;
    std::cout << easyfind(st, 40) << std::endl;
    
    return (0);
}