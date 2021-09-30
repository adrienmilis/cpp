#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand((unsigned int)time(NULL));
    cout << rand() << endl;
    return 0;
}