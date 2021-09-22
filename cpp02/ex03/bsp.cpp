#include "Point.hpp"

/*
    Pour savoir si un point est dans un triangle:

        - on fait 3 droites ax + b qui relient les cotes entre eux
        - on verifie pour chaque droite que le point est dans le meme demi-plan que 
        le 3e cote du triangle
*/

float sign (Point p1, Point p2, Point p3)
{
    std::cout << p1.get_x() << std::endl;
    std::cout << p1.get_y() << std::endl;
    std::cout << p2.get_x() << std::endl;
    std::cout << p2.get_y() << std::endl;
    std::cout << p3.get_x() << std::endl;
    std::cout << p3.get_y() << std::endl;
    return (0);
    // return (p1.get_x() - p3.get_x()) * (p2.get_y() - p3.get_y())
    //     - (p2.get_x() - p3.get_x()) * (p1.get_y() - p3.get_y());
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    float   d1, d2, d3;
    bool    has_neg, has_pos;

    std::cout << c.get_y() << std::endl;
    exit(0);

    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, a, c);

    // if (d1 == 0 || d2 == 0 || d3 == 0)
    //     return (0);
    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    std::cout << "d1: " << d1 << ", d2: " << d2 << ", d3: " << d3 << std::endl;
    return !(has_neg && has_pos);
}