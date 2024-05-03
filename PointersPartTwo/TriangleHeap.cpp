#include "TriangleHeap.h"

// Default constructor
TriangleHeap::TriangleHeap() : mBase(new float(0)), mHeight(new float(0)) {}

// Constructor with parameters
TriangleHeap::TriangleHeap(float base, float height) : mBase(new float(base)), mHeight(new float(height)) {}

// Destructor
TriangleHeap::~TriangleHeap() {
    delete mBase;
    delete mHeight;
}

// Copy constructor
TriangleHeap::TriangleHeap(const TriangleHeap& other) : mBase(new float(*other.mBase)), mHeight(new float(*other.mHeight)) {}

// Copy assignment operator
TriangleHeap& TriangleHeap::operator=(const TriangleHeap& other) {
    if (this != &other) {
        *mBase = *other.mBase;
        *mHeight = *other.mHeight;
    }
    return *this;
}

// Setter for base
void TriangleHeap::SetBase(float base) {
    *mBase = base;
}

// Setter for height
void TriangleHeap::SetHeight(float height) {
    *mHeight = height;
}

// Getter for area
float TriangleHeap::GetArea() const {
    return (*mBase * *mHeight) / 2;
}
