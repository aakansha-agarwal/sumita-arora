/**
Book: Computer Science with C++ by Sumita Arora, 8th Edition
Chapter: 6
Exercise: 19

Write a program to read values of w ,x ,y and z
and display the value of P, where

P = (w + x) / (y -z)
*/
#include <iostream>
using namespace std;


int main() {
	// your code goes here
        double p, w, x, y, z;
        p = w = x = y = z = 0.0;
        cout << "P Calculator" << endl;
        cout << "************" << endl ;
        cout << "P = (w + x) / (y - z)" << endl ;
        cout << "************" << endl << endl;

        cout << "w: " ;
        cin >>  w;

        cout << "x: " ;
        cin >>  x;

        cout << "y: " ;
        cin >>  y;

        cout << "z: " ;
        cin >>  z;

        p = (w + x) * 1.0 / (y - z) ;
        cout << "w: " << w << ", x: " << x << ", y: " << y << ", z: " << z << " => P: " << p << endl;
	return 0;
}
