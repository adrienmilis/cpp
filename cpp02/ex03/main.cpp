#include "Point.hpp"
#include "Fixed.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point);

int main() {

    Fixed   x1(0);
    Fixed   y1(3);
    Fixed   x2(7);
    Fixed   y2(0);
    Fixed   x3(4);
    Fixed   y3(10);
    Fixed   x4(0);
    Fixed   y4(0);

    const Point   a(x1, y1);
    const Point   b(x2, y2);
    const Point   c(x3, y3);
    const Point   z(x4, y4);

    std::cout << bsp(a, b, c, z) << std::endl;

    return (0);
}