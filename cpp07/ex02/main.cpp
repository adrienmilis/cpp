#include <iostream>
#include "Array.hpp"

class Awesome
{
    private:

        std::string _stringu;

    public:

        Awesome() : _stringu("garbanzo beans") {}
        ~Awesome() {}
        std::string getStringu() const { return this->_stringu; }
        void        setStringu(std::string s) { this->_stringu = s; }
        Awesome & operator=(Awesome const & rhs) { this->_stringu = rhs._stringu; return (*this); }
};

std::ostream & operator<<(std::ostream & o, Awesome const & rhs) {

    o << rhs.getStringu();
    return (o);
}

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        std::cout << numbers[749] << " " << tmp[749] << " " << test[749] << std::endl;
        numbers = test;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;

    std::cout << std::endl << "===COMPLEX TYPE===" << std::endl;
    Array<Awesome> aws(10);
    Array<Awesome> aws2(10);
    for (int i = 0; i < 11 ; i++)
    {
        try {
            std::cout << aws[i] << std::endl;
        }
        catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }

    for (int i = 0; i < 10 ; i++)
        aws2[i].setStringu("chili beans");
    aws = aws2;
    for (int i = 0; i < 11 ; i++)
    {
        try {
            std::cout << aws[i] << std::endl;
        }
        catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }
    Array<Awesome> aws3(aws2);
    for (int i = 0; i < 11 ; i++)
    {
        try {
            std::cout << aws[i] << std::endl;
        }
        catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }

    return 0;
}