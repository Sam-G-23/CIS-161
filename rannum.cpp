  //============================================================================
   // Name        : RandomYourLastName.cpp
   // Author      : Sam Goode
   // email       : sgoode1@dmacc.edu
   // Date        : 6/3/2020
   // Description : Display a user-determined number of random numbers, then 
   //               display the value of RAND_MAX in C++, Ansi-style.
   //============================================================================
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int counter = 0;
   // delcare a variable for use as a sentinel value, numRandomNumbers
   int numRandomNumbers;
   // prompt user to ask how many random numbers to display
   cin >> numRandomNumbers;
   while (counter < numRandomNumbers)
   {
       cout << rand() << endl;/*rand() will return a random number*/
       // output a random number (see chapter 2 in the book)
       counter++;
   }
   cout << RAND_MAX;
   // output the value of RAND_MAX
   return 0;
}
