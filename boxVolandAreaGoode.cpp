// Sam Goode sgoode1@dmacc.edu 6/7/2020
// This program is supposed to take the length, width, and height and give back to the user
// The volume, surface area of a particular box

#include <iostream>
using namespace std;

int main() {
    double l, w, h;
// for simplicity's sake I am using l, w, and h in substitution for length, width, and height
// also using double for the sake that not every length, width, and height will be an integer
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;
    cout << "Enter height: ";
    cin >> h;
// prompting and capturing user input
    double volume = l * w * h;
    double area = 2*(l*w + w*h + l*h);
// mathematical operations for the program
    cout << "Volume is " << volume << endl;
    cout << "Area is " << area << endl;
// returning the desired outputs
    return 0;
}
// program is an overall success
// so long as no one is funny and inputs a string
