#pragma once
class TriangleHeap
{
private:
    float* mBase;
    float* mHeight;

public:
    TriangleHeap();
    TriangleHeap(float base, float height);
    ~TriangleHeap(); // Destructor
    TriangleHeap(const TriangleHeap& other); // Copy constructor
    TriangleHeap& operator=(const TriangleHeap& other); // Copy assignment operator
    void SetBase(float base);
    void SetHeight(float height);
    float GetArea() const;
};

