/** 
Book: Computer Science with C++ by Sumita Arora, 8th Edition
Chapter: 6
Exercise: 23

Write a program that generates following outout
5
10
9

Assign value 5 to a variable using =, Multiply it by 2 to generate 10
and subtract 1 to generate 9
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int step1 = 5;
    int step2 = step1 * 2;
    int step3 = step2 - 1;
    
    cout << step1 << "\t" << step2 << "\t" << step3 << endl; 
	return 0;
}
