#include "span.hpp"

Span::Span() {

}

Span::Span(unsigned int N) : _lst(N) {

    
}

Span::Span(Span const & src) {

}

Span::~Span() {
	
}

Span & Span::operator=(Span const & rhs) {

    // assignation operation

    return *this;
}

std::list<int> Span::getList(void) const {

    return (this->_lst);
}

void    Span::addNumber(int n) {

    if (/* possible */)
    this->_lst.push_back(n);
}