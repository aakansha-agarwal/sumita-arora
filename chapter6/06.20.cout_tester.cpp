/**
Book: Computer Science with C++ by Sumita Arora, 8th Edition
Chapter: 6
Exercise: 20

Write a program that displays on screen

a. the character 'z'
b. the name 'Mohan'
c. the number 1977

Using (i) single cout statement (ii) multiple cout statements
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
    cout << "***************************" << endl;
    cout << "Printing with single cout" << endl;
    cout << 'z' << endl << "Mohan" << endl << 1977 << endl;


    cout << "***************************" << endl;
    cout << "Printing with multiple cout" << endl;
    cout << 'z' << endl  ;
    cout << "Mohan" << endl;
    cout << 1977 << endl;
	return 0;
}
