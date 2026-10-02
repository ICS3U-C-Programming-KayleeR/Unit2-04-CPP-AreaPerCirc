// Copyright (c) 2026 Kaylee R All rights reserved.
// .
// Created by: Kaylee R
// Date: September 30 2026
// This program asks user for radius
// of a circle for it to calculate
// the area and circumference of the circle.
// the program displays the output.

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // declare variables
    float radius, area, circumference;

    // ask user for radius
    std::cout <<"Enter the radius of the circle (cm): ";
    std::cin >> radius;

    // calculate the area and circumference
    area = M_PI * std::pow(radius, 2);
    circumference = M_PI * (radius * 2);

    // display output
    std::cout << std::fixed << std::setprecision(2);
    std::cout <<"The area = " << area << "cm" << "\n";
    std::cout <<"The circumference = " << circumference << "cm" <<
    "\n";
}
