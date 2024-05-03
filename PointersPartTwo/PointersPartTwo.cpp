// PointersPartTwo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Function to return the sum of the data pointed at by the two int pointers
int AddNumbersReturnInt(int* a, int* b) {
    return *a + *b;
}

// Function to store the result of the sum of a and b into the data of the sum pointer
void AddNumbersReturnVoid(int a, int b, int* sum) {
    *sum = a + b;
}

int main()
{
    std::cout << "Hello World!\n";
}
