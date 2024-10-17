
#include <array>
#include "Std2Arrays.h"

void fillArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns, FillMethod method) {
    if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
        throw std::invalid_argument("Incorrect number of rows or columns");
    }

    int value = 1;

    if (method == FillMethod::NE_DIAG_DOWN) {
        
        for (int col = columns - 1; col >= 0; --col) {
            int r = 0, c = col;
            while (r < rows && c < columns) {
                arr[r][c] = value++;
                r++;
                c++;
            }
        }
        for (int row = 1; row < rows; ++row) {
            int r = row, c = 0;
            while (r < rows && c < columns) {
                arr[r][c] = value++;
                r++;
                c++;
            }
        }
    }
}

void printArray(const std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
    if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
        throw std::invalid_argument("Incorrect number of rows or columns");
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
