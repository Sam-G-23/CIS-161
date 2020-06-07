// Sam Goode sgoode1@dmacc.edu 6/7/2020
// This program takes a user input and returns a discount (if any), the percent, total before discount and after
// after these three comments all other comments are written below the code they are referring to
#include <iomanip>
#include <iostream>
using namespace std;

double single_bottle = 24;
double user_purchase = 0;
// setting the variables to be manipulated
double percent = 0;
double discount = 0;
// used for calculated the discount in both currency and percentage
const int minimum1 = 11;
const int minimum2 = 16;
const int minimum3 = 21;
const int minimum4 = 31;
const double discountM1 = 0;
const double discountM2 = .1;
const double discountM3 = .2;
const double discountM4 = .3;
const double discountM5 = .35;
// constants that will not change for the duration of the program
int main() {
	cout << "How many bottles are you purchasing? ";
	cin >> user_purchase;
// taking user input
if (user_purchase < minimum1)
{
	discount = single_bottle * discountM1;
	percent = discountM1 * 100;
}
else if (user_purchase < minimum2) 
{
	discount = single_bottle * discountM2;
	percent = discountM2 * 100;
}
else if (user_purchase < minimum3)
{
	discount = single_bottle * discountM3;
	percent = discountM3 * 100;
}
else if (user_purchase < minimum4)
{
	discount = single_bottle * discountM4;
	percent = discountM4 * 100;
}
else
{
	discount = single_bottle * discountM5;
	percent = discountM5 * 100;
}
// nested if and else-if/else statements for the program
cout << "The full price would be: $" << fixed << setprecision(2) << user_purchase * single_bottle << endl;
cout << "but today you saved, $" << fixed << setprecision(2) << discount << " or %" << fixed << setprecision(0) << percent << endl;
cout << "Your total is: $" << fixed << setprecision(2) << user_purchase * single_bottle - discount << endl;
// Using "fixed << setprecision << variable" on the monetary variables and changing the percent back to no decimal
return 0;
}

// The program works as intended
// Test
// input   expected output(before discount)   actual output   pass/fail
//  10           240                               240          pass
//  5            120                               120          pass
// 25            600                               600          pass
// 31            744                               744          pass
