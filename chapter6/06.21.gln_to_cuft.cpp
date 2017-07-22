/**
Book: Computer Science with C++ by Sumita Arora, 8th Edition
Chapter: 6
Exercise: 21

Assuming tat there are 7.481 gallons in a cubic foot, 
write a program that asks the user to enter the number of gallons,
and then display the equivalent in cubic feet 
*/

#include <iostream>
using namespace std;

#define GALLONS_PER_CUBIC_FEET  7.481

int main() {
	// your code goes here
    double gallons = 0.0 , cubicFeet = 0.0;

    cout << "Converting Gallons To Cubic Feet" << endl;
    cout << "********************************" << endl << endl;

    cout << "Provide Quantity in Gallons: " ;
    cin >> gallons;

    cubicFeet = gallons / GALLONS_PER_CUBIC_FEET;

    cout << gallons << " Gallons => " << cubicFeet << " Cubic Feets" << endl << endl;
	return 0;
}
