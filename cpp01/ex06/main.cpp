#include "Karen.hpp"

int main(int argc, char **argv) 
{
    Karen       k;

    if (argc != 2)
    {
        std::cout << "1 parameter required" << std::endl;
        return (0);
    }
    std::string level(argv[1]);
    k.complain(level);
    return (0);
}