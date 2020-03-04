                // HW_17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "math.h"

class Vector
{
public:
    Vector(): x(), y(), z()
    {
        std::cout << "Enter X: ";
        std::cin >> x;
        std::cout << "Enter Y: ";
        std::cin >> y;
        std::cout << "Enter Z: ";
        std::cin >> z;
    }

    void PublicMethodForShowing()
    {
        std::cout <<'\n'<< x << ' ' << y << ' ' << z<<"\n";
    }
    void ModuleOfVector()
    {
        std::cout<<"\n"<<"Module of Vector = "  << sqrt((pow(x,2)) + (pow(y, 2)) + (pow(z, 2)))<<"\n";
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
    v.ModuleOfVector();
}

