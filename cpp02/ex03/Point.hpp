#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
    private:

        Fixed const _x;
        Fixed const _y;

	public:

		Point();                    // constructeur par defaut
        Point(Fixed const a, Fixed const b);
        Point(Point const & src);   // constructeur par copie
		virtual ~Point();           // destructeur

        Point & operator=(Point const & rhs);   // overload d'assignation

        float   get_x() const;
        float   get_y() const;
};

#endif
