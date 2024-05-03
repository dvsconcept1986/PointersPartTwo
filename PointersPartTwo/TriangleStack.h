#pragma once
class TriangleStack
{
private:
    float mBase;
    float mHeight;

public:
    TriangleStack();
    TriangleStack(float base, float height);
    void SetBase(float base);
    void SetHeight(float height);
    float GetArea() const;
};

