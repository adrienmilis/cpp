#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:

		MutantStack();
        MutantStack(MutantStack const & src);
		virtual ~MutantStack();
        MutantStack & operator=(MutantStack const & rhs);

        struct iterator
        {
            public:

                iterator(T * ptr) : m_ptr(ptr) {};

                T &   operator*() const { return *m_ptr; }
                T *     operator->() { return m_ptr; }

                iterator &  operator++() { m_ptr++; return *this; }
                iterator &  operator--() { m_ptr--; return *this; }
                bool        operator==(const iterator & rhs) { return (this->m_ptr == rhs.m_ptr); }
                bool        operator!=(const iterator & rhs) { return (this->m_ptr != rhs.m_ptr); }

            private:

                T * m_ptr;
        };
        
        // for iterators
        iterator    begin();
        iterator    end();
};

#include "mutantstack.cpp"
#endif
