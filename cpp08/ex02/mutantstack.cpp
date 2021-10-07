#include "mutantstack.hpp"

/*
    - decrement
*/

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {

}


template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & src) : std::stack<T>(src) {

}

template<typename T>
MutantStack<T>::~MutantStack() {
	
}

template<typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack<T> const & rhs) {

    this->c = rhs.c;
    return *this;
}

template<typename T>
typename MutantStack<T>::iterator    MutantStack<T>::begin() {

    T * ptr;

    ptr = &(*this->c.begin());  // convert deque begin iterator to pointer
    return (iterator(ptr));
}

template<typename T>
typename MutantStack<T>::iterator    MutantStack<T>::end() {

    T * ptr;

    ptr = &(*this->c.end());
    return (iterator(ptr));
}
