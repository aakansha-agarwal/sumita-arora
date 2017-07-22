/**
Book: Computer Science with C++ by Sumita Arora, 8th Edition
Chapter: 6
Exercise: 18
Write a C++ program that reads temperature in Celcius and displays in Fahrenheit
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
    double tempratureInCelcius = 0.0;
    cout << "Converting Temprature From Celcius To Fahrenheit" << endl;
    cout << "************************************************" << endl << endl;
    cout << "Provide Temprature In Celcius: " ;
    cin >>  tempratureInCelcius;

    double tempratureInFarenheit = tempratureInCelcius * ( 9.0 / 5 ) + 32 ;
    cout << tempratureInCelcius << "°C => " << tempratureInFarenheit << "°F"<< endl;
	return 0;
}
