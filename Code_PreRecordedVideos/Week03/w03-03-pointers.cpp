#include <iostream>

#define ROWS 10
#define COLS 5

int main(void) {

    int x = 10;
    int y = -3;

    int* ptr = &x;
    int* qtr = &y;

    // int** pptr = &ptr;
    // int*** ppptr = &pptr;

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    std::cout << *ptr << std::endl;
    std::cout << *qtr << std::endl;

    // std::cout << **pptr << std::endl;
    // std::cout << ***ppptr << std::endl;

    // int array[ROWS][COLS] = {};
    // for (int i = 0; i < ROWS; ++i) {
    //     for (int j = 0; j < COLS; ++j) {
    //         std::cout << i << j << ": " << array[i][j] << std::endl;
    //     }
    // }

    return EXIT_SUCCESS;
}
