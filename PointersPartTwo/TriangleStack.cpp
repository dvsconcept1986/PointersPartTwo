#include "TriangleStack.h"

TriangleStack::TriangleStack() : mBase(0), mHeight(0) {}

TriangleStack::TriangleStack(float base, float height) : mBase(base), mHeight(height) {}

void TriangleStack::SetBase(float base) {
    mBase = base;
}

void TriangleStack::SetHeight(float height) {
    mHeight = height;
}

float TriangleStack::GetArea() const {
    return mBase * mHeight / 2;
}
