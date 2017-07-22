/**
Book: Computer Science with C++ by Sumita Arora, 8th Edition
Chapter: 6
Exercise: 24

Write a C++ program that accepts radius of a circle and prints its area
*/

#include <iostream>
using namespace std;

#define PIE 3.14

double getCircleAreaFromRadius(double radius)
{
    double area = PIE *  radius * radius;
    return area;
}

int main() {
	// your code goes here
    double radius = 0.0;
    cout << "What is the Radius of Circle: " ;
    cin >> radius;
    
    double area = getCircleAreaFromRadius(radius);

    cout << "Radius: " << radius << " => Area: " << area << endl;
	return 0;
}
