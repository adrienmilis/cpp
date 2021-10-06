#include <vector>
#include <cstdlib>
#include "span.hpp"

int main(void)
{
    Span sp = Span(5);

    std::cout << "***SIMPLE TEST***" << std::endl;
    sp.addNumber(1);
    sp.addNumber(2);
    
    std::vector<int>    v(3, 15);
    std::vector<int>::iterator  it = v.begin();
    std::vector<int>::iterator  ite = v.end();
    
    // add the contents of the vector to our span
    sp.addNumber(it, ite);

    sp.displayList();

    // no more room in the list
    try {
        sp.addNumber(1);
    }
    catch (const std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "longest span: " << sp.longestSpan() << std::endl;
    
    std::cout << "***2nd test***" << std::endl;
    std::vector<int>    v2;
    std::vector<int>::iterator  v_it;
    std::vector<int>::iterator  v_ite;
    srand(time(NULL));

    for (int i = 0 ; i < 15000 ; i++)
        v2.push_back(rand() % 100);

    v_it = v2.begin();
    v_ite = v2.end();
    Span sp2 = Span(15000);
    sp2.addNumber(v_it, v_ite);
    
    std::cout << "list size: " << sp2.getList().size() << std::endl;
    std::cout << "shortest span: " << sp2.shortestSpan() << std::endl;
    std::cout << "longest span: " << sp2.longestSpan() << std::endl;
    
    std::cout << "***COPY CONSTRUCTOR***" << std::endl;
    Span sp3(sp2);
    std::cout << "list size: " << sp3.getList().size() << std::endl;
    std::cout << "shortest span: " << sp3.shortestSpan() << std::endl;
    std::cout << "longest span: " << sp3.longestSpan() << std::endl;
    
    std::cout << "***ASSIGNATION OPERATOR***" << std::endl;
    Span sp4(10);
    sp4 = sp2;
    std::cout << "list size: " << sp4.getList().size() << std::endl;
    std::cout << "shortest span: " << sp4.shortestSpan() << std::endl;
    std::cout << "longest span: " << sp4.longestSpan() << std::endl;

    std::cout << "***NOT ENOUGH VALUES EXCEPTION***" << std::endl;
    Span    sp5(100);

    sp5.addNumber(10);
    try {
        sp5.shortestSpan();
    }
    catch (const std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    return (0);

}