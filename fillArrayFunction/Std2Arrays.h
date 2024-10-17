#ifndef STD2DARRAYS_H
#define STD2DARRAYS_H

#include <array>
#include <iostream>
#include <stdexcept>

const int MAXNUMBEROFROWS = 100;
const int MAXNUMBEROFCOLUMNS = 100;

enum class FillMethod { NE_DIAG_DOWN };

void fillArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns, FillMethod method);
void printArray(const std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns);

#endif // STD2DARRAYS_H
