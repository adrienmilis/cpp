#include "templates.hpp"
#include <iostream>

int main(void)
{
    int     a = 21;
    int     b = 42;
    double  c = 5.25;
    double  d = 10.5;

    std::cout << "===SWAP TEST===" << std::endl;
    swap<int>(a, b);  // explicit
    std::cout << "a: " << a << ", b: " << b << std::endl;
    swap(c, d);       // implicit
    std::cout << "c: " << c << ", d: " << d << std::endl;
    swap(a, b);       // reswap
    swap(c, d);

    std::cout << "===MIN TEST===" << std::endl;
    std::cout << "min(a, b)" << min(a, b) << std::endl;
    std::cout << "min(c, d)" << min<double>(c, d) << std::endl;

    std::cout << "===MAX TEST===" << std::endl;
    std::cout << "max(a, b)" << max(a, b) << std::endl;
    std::cout << "max(c, d): " << max<double>(c, d) << std::endl;

    std::cout << "===SUBJECT TESTS===" << std::endl;
    int e = 2;
    int f = 3;
    ::swap( e, f );
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
    std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
    std::string g = "chaine1";
    std::string h = "chaine2";
    ::swap(g, h);
    std::cout << "g = " << g << ", h = " << h << std::endl;
    std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
    std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;

    return (0);
}