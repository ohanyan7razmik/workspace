#include <iostream>


int main() {

    int *a = 5;
    int *b = 10;
    
    int *c = a + b;

    std::cout << "c is " << *c << std::endl;

    return 0;
}