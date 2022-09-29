// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Sep 2022
// This program calculates the circumference of a circle

#include <cmath>
#include <iostream>

int main() {
    // this function calculates the circumference of a circle
    const double TAU = 6.28318530718;
    int radius;
    double circumference;

    // input
    std::cout << "Circumference = τr" << std::endl;
    std::cout << "Enter radius: ";
    std::cin >> radius;

    // process
    circumference = (round(TAU * radius * 100) / 100);

    // output
    std::cout << "" << std::endl;
    std::cout << "The circumference is " << circumference << " mm.";
    std::cout << "\nDone." << std::endl;
}
