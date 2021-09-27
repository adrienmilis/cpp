#include "Point.hpp"
#include "Fixed.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point);

int main() {

    // triangle coordinates
    const Point   a(Fixed(0), Fixed(0));
    const Point   b(Fixed(0), Fixed(5));
    const Point   c(Fixed(5), Fixed(0));

    // point in the triangle (should return 1)
    const Point x(Fixed(1), Fixed(1));
    std::cout << bsp(a, b, c, x) << std::endl;

    // point not in the triangle (should return 0)
    const Point y(Fixed(10), Fixed(10));
    std::cout << bsp(a, b, c, y) << std::endl;

    // point on the border of the triangle (should return 0)
    const Point z(Fixed(0), Fixed(5));
    std::cout << bsp(a, b, c, z) << std::endl;

    return (0);
}