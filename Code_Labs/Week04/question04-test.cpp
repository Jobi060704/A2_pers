#include <iostream>

int stringLength(char* string);
void copyString(char* src, char* dest);

int main(void) {

    std::cout << "Testing stringLength" << std::endl;
    char* nullStr = nullptr;
    char empty[] = "";
    char hello[] = "Hello World";
    std::cout << "Should be 0 but is: " << stringLength(nullStr) << std::endl;
    std::cout << "Should be 0 but is: " << stringLength(empty) << std::endl;
    std::cout << "Should be 11 but is: " << stringLength(hello) << std::endl;

    // Uncomment these when you have tested stringLength
    // char from[] = "this should be copied";
    // char to[] = "";
    // cout << "Before: from: " << from << ", to:  " << to << endl;
    // copyString(from, to);
    // cout << "After: from: " << from << ", to:  " << to << endl;

    return EXIT_SUCCESS;
}

// Place your stringLength and copyString
// Implementations here
