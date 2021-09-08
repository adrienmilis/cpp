#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    public:

        Fixed(void);
        Fixed(const int nb);
        Fixed(const float fnb);
        Fixed(Fixed const & src);
        ~Fixed(void);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);

        float   toFloat(void) const;
        int     toInt(void) const;

        Fixed & operator=(Fixed const & rhs);

        // operateurs de comparaison
        bool    operator>(Fixed const & rhs);
        bool    operator<(Fixed const & rhs);
        bool    operator>=(Fixed const & rhs);
        bool    operator<=(Fixed const & rhs);
        bool    operator==(Fixed const & rhs);
        bool    operator!=(Fixed const & rhs);

        // operateurs arithmetiques
        Fixed   operator+(Fixed const & rhs);
        Fixed   operator-(Fixed const & rhs);
        Fixed   operator*(Fixed const & rhs);
        Fixed   operator/(Fixed const & rhs);

        // operateurs d'increment/decrement
        Fixed & operator++(); // prefix increment
        Fixed   operator++(int);  // postfix increment
        Fixed & operator--(); // prefix decrement
        Fixed   operator--(int); // postfix decrement

        // min max
        static Fixed const & min(Fixed const & a, Fixed const & b);
        static Fixed const & max(Fixed const & a, Fixed const & b);
        
    private:

        int                 _fixed_value;
        static const int    _bits = 8;
};

std::ostream &  operator<<(std::ostream & o, Fixed const & rhs);

#endif