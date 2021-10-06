#include "span.hpp"

/*
    - span functions
*/

Span::Span() {

}

Span::Span(unsigned int N) : _maxSize(N) {

}

Span::Span(Span const & src) : _maxSize(src.getMaxSize()) {
    
    this->_lst = src.getList(); // deep copy
}

Span::~Span() {
	
}

Span & Span::operator=(Span const & rhs) {

    this->_maxSize = rhs.getMaxSize();
    this->_lst = rhs.getList();
    return *this;
}

// GETTERS
std::list<int> Span::getList(void) const {

    return (this->_lst);
}

unsigned int    Span::getMaxSize(void) const {

    return (this->_maxSize);
}

void    Span::addNumber(int n) {

    if (this->_lst.size() < this->_maxSize)
        this->_lst.push_back(n);
    else
        throw Span::NoSufficientRoomException();
}

void    Span::displayList(void) const {

    std::list<int>::const_iterator    it = this->_lst.begin();
    std::list<int>::const_iterator    ite = this->_lst.end();
    
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
}

unsigned int    Span::shortestSpan(void) {

    if (this->_lst.size() < 2)
        throw Span::NotEnoughValuesException();
    std::list<int>::iterator    it = this->_lst.begin();
    std::list<int>::iterator    it2 = this->_lst.begin();
    std::list<int>::iterator    ite = this->_lst.end();
    int diff = INT_MAX;
    int new_diff;

    this->_lst.sort();
    ++it2;
    while (it2 != ite) {
        new_diff = std::abs(*it - *it2);    
        diff = (new_diff < diff) ? new_diff : diff;
        ++it;
        ++it2;
    }
    return (diff);
}

unsigned int    Span::longestSpan(void) {

    if (this->_lst.size() < 2)
        throw Span::NotEnoughValuesException();
    int max_it = *(std::max_element(this->_lst.begin(), this->_lst.end()));
    int min_it = *(std::min_element(this->_lst.begin(), this->_lst.end()));

    return (std::abs(max_it - min_it));
}
