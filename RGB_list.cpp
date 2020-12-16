// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Dec 2020
// This program for nested loop

#include <iostream>
#include <cmath>


int main() {
    // this fuction for nested loop

    int R;
    int G;
    int B;

    // process & output
    for (R = 0; R < 256; R++) {
        for (G = 0; G < 256; G++) {
            for (B = 0; B < 256; B++) {
                std::cout << "RGB (" << R << ", " << G << ", " << B << ")\n";
            }
        }
    }
}
