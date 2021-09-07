#include "Karen.hpp"

int main(){

    Karen   k;

    k.complain("TEST");
    std::cout << "Valid parameters begin" << std::endl;
    k.complain("DEBUG");
    k.complain("INFO");
    k.complain("WARNING");
    k.complain("ERROR");
    return (0);
}