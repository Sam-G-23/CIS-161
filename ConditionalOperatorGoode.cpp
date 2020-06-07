// Sam Goode sgoode1@dmacc.edu 6/7/2020
// The objection of this program is to receive a test results from a user from 1-6 assuming they honor it
// The program should give a pass/fail if 70% is met.

#include <iostream>
using namespace std;

int main() {
    int test_input, pass_grade;
    test_input = pass_grade = 0;
// setting up the two variables to be used in this program
    cout << "Enter your test score: ";
    cin >> test_input;
// storing input
    cout << "\nEnter the score needed to pass: ";
    cin >> pass_grade;
// storing input
    cout << "You needed at least this to pass: " << ((test_input > pass_grade) ? test_input : pass_grade); 
	cout << "\nand you got this on your test: " << ((test_input < pass_grade) ? test_input : pass_grade) << std::endl; 
// pushing out the needed results for a passing grade.
    return 0;
}
// Overall the code works albeit rather elementary and not conducive of something useful for say a teacher in the real world
// 4.2 is required to pass to simplify that it is rounded down to 4
// 4 = pass as assumed
// 3 = does not pass as assumed
// 1 = does not pass as assumed
// This program needs to be pushed further of course but for the scope of the extra credit I believe it fulfills the purpose
