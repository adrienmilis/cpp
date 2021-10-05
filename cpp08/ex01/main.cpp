#include "span.hpp"

int main(void)
{
    Span sp = Span(5);

    sp.addNumber(1);
    std::cout << sp.getList().front() << std::endl;
    return (0);
}