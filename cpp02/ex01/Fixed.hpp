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


    private:

        int                 _fixed_value;
        static const int    _bits = 8;
};

std::ostream &  operator<<(std::ostream & o, Fixed const & rhs);

#endif