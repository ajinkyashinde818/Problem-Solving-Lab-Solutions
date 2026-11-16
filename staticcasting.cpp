#include <iostream>
using namespace std;

int main()
{
    int studentID = 101;
    float marks = 93.12;

    
    int totalMarks = static_cast<int>(marks);

    cout << "College Management System" << endl;
    cout << "Student ID: " << studentID << endl;
    cout << "Original Marks: " << marks << endl;
    cout << "Converted Marks: " << totalMarks << endl;

    return 0;
}