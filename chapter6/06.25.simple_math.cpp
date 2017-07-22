/** 
Book: Computer Science with C++ by Sumita Arora, 8th Edition
Chapter: 6
Exercise: 25

Write a C++ program to print the output mentioned in question 23
in different line i.e., all values must appear in the different lines
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int step1 = 5;
    int step2 = step1 * 2;
    int step3 = step2 - 1;
    
    cout << step1 << endl << step2 << endl << step3 << endl; 
	return 0;
}
