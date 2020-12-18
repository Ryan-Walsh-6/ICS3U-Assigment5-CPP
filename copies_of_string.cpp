// Copyright (c) 2020 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on December 10 2020
// this program gets a string from the user and repeats however many times they
// want

#include <iostream>
#include <string>

int main() {
// this program gets a string from the user and repeats however many times they
// want
    std::string given_string;
    int counter;
    int amount_of_copies;
    std::string amount_of_copies_string;

    // input
    std::cout << "Enter any string please: ";
    std::cin >> given_string;
    std::cout << "" << std::endl;
    counter = 0;

    // process and output
    while (true) {
         std::cout << "Enter the amount of times you would like the";
         std::cout << " string to be repeated: ";
         std::cin >> amount_of_copies_string;
         std::cout << "" << std::endl;
        try {
            amount_of_copies = std::stoi(amount_of_copies_string);

            if (amount_of_copies > 0) {
                for (counter = 0; counter < amount_of_copies; counter++) {
                    std::cout << "" << given_string;
                }
                break;
            } else {
            std::cout << amount_of_copies << " was not a positive integer."
                    " Enter an integer above 0." << std::endl;
            std::cout << std::endl;
            }
        }catch (std::invalid_argument) {
        std::cout << amount_of_copies << " is not an integer."
                    "Please enter an integer." << std::endl;
        std::cout << std::endl;
        }
    }
}
