/** 
Book: Computer Science with C++ by Sumita Arora, 8th Edition
Chapter: 6
Exercise: 22

Write a program to generate following table
1992        17421
1993        29210
1994        100523
1995        106802
1996        127000

Use a single cout statement for output
(Hint: make use of \n and \t)
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int year[] = {1992 , 1993, 1994, 1995 , 1996};
    int yeardata[] = {17421, 29210, 100523, 106802, 127000};

    for ( int i = 0 ; i < sizeof(year) / sizeof(int) ; i++ ) 
    {
        cout << year[i] << "\t" << yeardata[i] << endl; 
    }
	return 0;
}
