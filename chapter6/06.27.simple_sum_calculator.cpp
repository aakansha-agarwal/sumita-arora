/** 
Book: Computer Science with C++ by Sumita Arora, 8th Edition
Chapter: 6
Exercise: 27

write a C++ program to accept two integers
and print their sum
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int num1 = 0, num2 = 0, sum = 0.0;
    
    cout << "What is first number? ";
    cin >> num1;
    
    cout << "What is second number? ";
    cin >> num2;

    sum = num1 + num2 ;

    cout << num1 << " + " << num2 << " = " << sum << endl;
    

	return 0;
}
