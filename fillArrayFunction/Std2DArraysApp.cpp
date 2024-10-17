
#include <iostream>
#include "Std2Arrays.h"

int main() {
    std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS> arr;
    int numberOfRows, numberOfColumns;

    std::cout << "Enter the number of rows: ";
    std::cin >> numberOfRows;
    std::cout << "Enter the number of columns: ";
    std::cin >> numberOfColumns;

    try {
        fillArray(arr, numberOfRows, numberOfColumns, FillMethod::NE_DIAG_DOWN);
        printArray(arr, numberOfRows, numberOfColumns);
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
