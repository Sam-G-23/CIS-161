// Sam Goode sgoode1@dmacc.edu 6/7/2020
// The objective of this code is to create a switch statement for a taco truck

#include <iostream>
using namespace std;

int main()
{
int choose, quantity;
// choose and quantity
cout << "Food Truck Menu\n";
// displaying menu
cout << "1. Taco\n";
cout << "2. Burrito\n";
cout << "3. Can of Soda\n\n";
cout << "Enter your choice: ";

cin >> choose;
// storing variable
if(choose<1 || choose>3)
{
cerr << "Invalid choice!\n"; 
//error message I can not seem to find "cerr" in chapter 4 as of writing this code
return 1; 
//terminating program
}

cout << "Enter quantity of the item you want: "; 
//input prompt
cin >> quantity; 
//input
if(quantity<=0) 
//validation
{
cerr << "Invalid quantity!\n"; 
//error message
return 1; 
//terminating program
}
cout << "\n";
//declaring and calculating total
int total=0;
switch(choose)
{
case 1:
cout << "You have ordered " << quantity << " Tacos.\n";
total=2*quantity;
break;

case 2:
cout << "You have ordered " << quantity << " Burritos.\n";
total=3*quantity;
break;

case 3:
cout << "You have ordered " << quantity << " Cans of Soda.\n";
total=1*quantity;
break;
}
// switch in action
cout << "Your total bill is $" << total << "\n";
//output
}
// Everything seems to be in order besides that "cerr" I am postive everything else is using the proper 
// Test
// input    expect output    actual output    pass/fail
//   5       5 for soda           5             pass
//  25      75 for burrito       75             pass
//  10        20 for taco        20             pass
