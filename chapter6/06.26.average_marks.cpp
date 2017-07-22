/**
Book: Computer Science with C++ by Sumita Arora, 8th Edition
Chapter: 6
Exercise: 26

Write a C++ program that accepts marks in 5
subjects and outputs average marks
*/

#include <iostream>
using namespace std;

#define SUBJECTS_COUNT 5

int main() {
	// your code goes here
    double subjectMarks = 0.0 ;    
    double totalMarks = 0.0 ;
    double averageMarks = 0.0 ;

    for ( int i = 0 ; i < SUBJECTS_COUNT ; i++ ) 
    {
        cout << "Give Marks in Subject-" << i+1 << " ";
        cin >> subjectMarks;
        totalMarks = totalMarks + subjectMarks;
    }

    averageMarks = totalMarks / SUBJECTS_COUNT;

    cout << "Average Marks: " << averageMarks << endl;
    
	return 0;
}
