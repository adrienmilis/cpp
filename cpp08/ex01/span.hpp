#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <list>

/*
    member functions must use STL algorithms
    add numbers by passing a range of iterators
*/

class Span
{
    private:

        std::list<int>  _lst;       
		Span();

	public:

        Span(unsigned int N);
        Span(Span const & src);
		~Span();
        Span & operator=(Span const & rhs);

        std::list<int> getList(void) const;
        void    addNumber(int n);
};

#endif
