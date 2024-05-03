// PointersPartTwo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "TriangleStack.h"
#include "TriangleHeap.h"

//function declarations
int AddNumbersReturnInt(int* a, int* b);
void AddNumbersReturnVoid(int a, int b, int* sum);
void SwapValues(int* a, int* b);

int main()
{
    // Example usage of AddNumbersReturnInt
    int num1 = 5, num2 = 7;
    std::cout << "Sum of " << num1 << " and " << num2 << " is: " << AddNumbersReturnInt(&num1, &num2) << std::endl;

    // Example usage of AddNumbersReturnVoid
    int sum;
    AddNumbersReturnVoid(8, 9, &sum);
    std::cout << "Sum: " << sum << std::endl;

    // Example usage of SwapValues
    int x = 10, y = 20;
    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;
    SwapValues(&x, &y);
    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;
    
    //
    //
    // Declare and set values for TriangleStack objects
    TriangleStack triangle1(5, 8);
    TriangleStack triangle2(7, 10);

    // Create a vector of TriangleStack objects and add the triangles to it
    std::vector<TriangleStack> stackTriangles;
    stackTriangles.push_back(triangle1);
    stackTriangles.push_back(triangle2);

    // Print areas of TriangleStack objects
    std::cout << "TriangleStack areas:\n";
    for (const auto& triangle : stackTriangles) {
        std::cout << "Area: " << triangle.GetArea() << std::endl;
    }

    // Declare and set values for TriangleHeap objects
    TriangleHeap* heapTriangle1 = new TriangleHeap(3, 6);
    TriangleHeap* heapTriangle2 = new TriangleHeap(4, 9);

    // Create a vector of TriangleHeap objects and add the triangles to it
    std::vector<TriangleHeap> heapTriangles;
    heapTriangles.push_back(*heapTriangle1);
    heapTriangles.push_back(*heapTriangle2);

    // Print areas of TriangleHeap objects
    std::cout << "\nTriangleHeap areas:\n";
    for (const auto& triangle : heapTriangles) {
        std::cout << "Area: " << triangle.GetArea() << std::endl;
    }

    // Clean up dynamically allocated memory
    delete heapTriangle1;
    delete heapTriangle2;

    return 0;
}

// Function to return the sum of the data pointed at by the two int pointers
int AddNumbersReturnInt(int* a, int* b) {
    return *a + *b;
}

// Function to store the result of the sum of a and b into the data of the sum pointer
void AddNumbersReturnVoid(int a, int b, int* sum) {
    *sum = a + b;
}

// Function to swap the data pointed at by both pointers
void SwapValues(int* a, int* b) {
    int temp = *a; // Store the value of 'a' in a temporary variable
    *a = *b;       // Assign the value of 'b' to 'a'
    *b = temp;     // Assign the value stored in the temporary variable to 'b'
}
