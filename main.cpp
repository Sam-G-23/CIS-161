//============================================================================
// Name        : IntArithmetic.cpp
// Author      : Sam Goode
// Version     :
// Copyright   : Your copyright notice
// Description : Arithmetic using int data type in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
    double a, b;
    a = 5, b = 7;

    cout << "Enter a number: ";
    cin >> a;

    cout << "\nEnter a number: ";
    cin >> b;

    cout << "Addition:           " << (a + b) << endl;
    cout << "Subtraction:        " << (a - b) << endl;
    cout << "Multiplication:     " << (a * b) << endl;
    cout << "Division:           " << (a / b) << endl;
    return 0;
}
// Finding out modulo is only viable for int is interesting
// Test data 1.) a = 5, b = 7
// addition: 12.00
// subtraction: -2.00
// multiplication: 35.00
