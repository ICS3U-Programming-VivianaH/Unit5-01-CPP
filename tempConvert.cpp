// Copyright 2025 Viviana Hurtado
// Created by: Viviana Hurtado
// Date: May, 2025
// This program has a function called fahrenheit().
// this function lets you enter a temperature in
// degrees Celsius(as a decimal), and converts
// and displays the temperature in Fahrenheit
#include <iostream>

void Fahrenheit() {
    // convert celsius to fahrenheit

    float celsius;
    float fahrenheit;

    // input
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    // process
    fahrenheit = (9.0 / 5.0) * celsius + 32;

    // output
    std::cout << "The temperature is " << fahrenheit << "°F"
              << std::endl
              << std::endl;
}

int main() {
    // this function calls other function

    // call function
    Fahrenheit();
}
