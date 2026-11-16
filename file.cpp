#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int choice;
    string line;

    cout << "1. Add" << endl;
    cout << "2. Modify" << endl;
    cout << "3. Append" << endl;
    cout << "4. Display" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        ofstream file("student.txt");
        file << "Name: Ajinkya" << endl;
        file << "Marks: 90" << endl;
        file.close();
        cout << "Data Added.";
    }
    else if (choice == 2) {
        ofstream file("student.txt");
        file << "Name: Ajinkya" << endl;
        file << "Marks: 95" << endl;
        file.close();
        cout << "Data Modified.";
    }
    else if (choice == 3) {
        ofstream file("student.txt", ios::app);
        file << "Name: Rahul" << endl;
        file << "Marks: 85" << endl;
        file.close();
        cout << "Data Appended.";
    }
    else if (choice == 4) {
        ifstream file("student.txt");

        while (getline(file, line)) {
            cout << line << endl;
        }

        file.close();
    }
    else {
        cout << "Invalid Choice";
    }

    return 0;
}