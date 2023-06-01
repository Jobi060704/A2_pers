#include <iostream>

int main(void) {

    int x = 10;
    int y = -3;

    int* ptr = &x;
    int* qtr = &y;

    int** rtr = &ptr;
    int** ttr = &qtr;

    ttr = rtr;

    // Make x & y equal using ttr & rtr
    ?? = ??

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    return EXIT_SUCCESS;
}
