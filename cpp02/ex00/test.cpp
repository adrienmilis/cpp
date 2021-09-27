#include <iostream>

// test to see if both instances have the same address or not with a copy constructor
// answer: they don't

class Test
{
    public:
        Test() {}
        Test(Test const & src) {
            *this = src;
        }
        ~Test() {}
};

int main() {

    Test    test_src;
    Test    test_dst(test_src);

    std::cout << "src: " << &test_src << ", dst: " << &test_dst << std::endl;
}