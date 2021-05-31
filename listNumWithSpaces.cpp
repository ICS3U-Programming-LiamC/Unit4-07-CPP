// Copyright (c) 2021 Liam Csiffary All rights reserved.
//
// Created by: Liam Csiffary
// Date: May 31, 2021
// This program lists all numbers from 1000 to 2000 and puts
// a new line after every 5th number

#include <iostream>
#include <cmath>

// define and set variables
int counter;
int each = 1000;

// main function
int main() {
    // for each number so long as its less than 2000 do the following
    for (each; each < 2001; each++) {
        // first print it and add a space
        std::cout << each << " ";
        // add to this counter
        counter++;
        // if the counter == 5 reset it then make a new line
        // I know theres a better way to make a new line user endl
        // but I'm used to this
        if (counter == 5) {
            counter = 0;
            std::cout << "\n";
        }
    }
}
