// Sam Goode sgoode1@dmacc.edu 6/7/2020

#include <iostream>
using namespace std;

int main() 
{
	int test_input;
// setting up variable	
	cout<< "What is your test score?" << endl;
	cin>> test_input;
// storing user input
	if (test_input >= 7) {
		cout << "Your test score of " << test_input  << " is passing!\n";
	} // If statement begins and using mathematical operation to see if user has pass/failed test.
	else {
		cout << "Your test score of " << test_input << " is not passing!" << endl;
	}
	return 0;
}
// Test is a success after 7 tries it works but anything higher than a 10 is still accepted.
// Not sure on how to have the program reject those numbers.
// Test results
// 1 = not passing, as expected
// 7 = passing, as expected
// 6 = not passing, as expected
