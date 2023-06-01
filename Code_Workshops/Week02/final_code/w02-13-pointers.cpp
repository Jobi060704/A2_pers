#include <iostream>

#define ROWS 10
#define COLS 5

int main(void) {

    int x = 10;
    int y = -3;

    int* ptr = &x;
    int* qtr = &y;

    int** pptr = &ptr;
    int** qqtr = &qtr;

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    std::cout << *ptr << std::endl;
    std::cout << *qtr << std::endl;

    std::cout << ptr << std::endl;
    std::cout << qtr << std::endl;

    //ptr = nullptr;

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    std::cout << *ptr << std::endl;
    std::cout << *qtr << std::endl;

    std::cout << **pptr << std::endl;
    std::cout << **qqtr << std::endl;

    std::cout << *pptr << std::endl;
    std::cout << *qqtr << std::endl;


    return EXIT_SUCCESS;
}
