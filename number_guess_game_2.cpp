// Copyright (c) 2019 Davin Rousseau All rights reserved
//
// Created by: Davin Rousseau
// Created on October 2019
// this program asks user to guess a number
// from 0-9

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int chosen_number;
    srand(time(NULL));  // seed for random number depending on time
    int random = rand_r() % 10;

    // input
    std::cout << "Guess my number (0-9): ";
    std::cin >> chosen_number;

    // process
    if (chosen_number == random) {
    // output
    std::cout << "Correct!";
    } else {
    // output
    std::cout << "Wrong! Correct number was: " << random << std::endl;
}
}
