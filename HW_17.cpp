                // HW_17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "math.h"

class Vector
{
public:
    Vector() : x(5), y(5), z(5)
    {}
 
    void PublicMethodForShowing()
    {
        std::cout <<'\n'<< x << ' ' << y << ' ' << z;
    }
    void ModuleOfVector()
    {
        std::cout << '\n' << sqrt((pow(x,2)) + (pow(y, 2)) + (pow(z, 2)));
    }
private:
    double x;
    double y;
    double z;
};

int main()
{
    Vector v;
    v.PublicMethodForShowing();

    Vector m;
    m.ModuleOfVector();
    
}

