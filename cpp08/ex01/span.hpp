#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <list>
#include <cmath>
#include <algorithm>


/*
    - member functions must use STL algorithms
    - add numbers by passing a range of iterators (use std::list.insert())
*/

class Span
{
    private:

        std::list<int>  _lst;
        unsigned int    _maxSize; 
		Span();

	public:

        Span(unsigned int N);
        Span(Span const & src);
		~Span();
        Span & operator=(Span const & rhs);

        std::list<int>  getList(void) const;
        unsigned int    getMaxSize(void) const;
        
        void            addNumber(int n);
        void            displayList(void) const;
        unsigned int    shortestSpan(void);
        unsigned int    longestSpan(void);

        template<typename InputIterator>
        void    addNumber(InputIterator first, InputIterator last) {
        
            unsigned long distance = static_cast<unsigned long>(std::distance(first, last));
            if (this->_maxSize - this->_lst.size() >= distance)
                this->_lst.insert(this->_lst.end(), first, last);
            else
                throw Span::NoSufficientRoomException();
        }

        class   NoSufficientRoomException : public std::exception 
        {
            virtual const char* what() const throw() {
                return ("Exception: no sufficient room to add to list"); 
                }
        };

        class   NotEnoughValuesException : public std::exception
        {
            virtual const char* what() const throw() {
                return ("Exception: not enough values to evaluate span");
            }
        };
};

#endif
