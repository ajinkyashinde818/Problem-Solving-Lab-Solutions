
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    int choice;
    string line;

    do {
        cout << "\n1. Add" << endl;
        cout << "2. Modify" << endl;
        cout << "3. Append" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            ofstream file("student.txt", ios::app);

            file << "Name: Ajinkya" << endl;
            file << "Marks: 90" << endl;

            file.close();
            cout << "Data Added.";
        }
        else if (choice == 2) {
            ifstream file("student.txt");
            ofstream temp("temp.txt");

            while (getline(file, line)) {
                if (line == "Marks: 90")
                    line = "Marks: 95";

                temp << line << endl;
            }

            file.close();
            temp.close();

            remove("student.txt");
            rename("temp.txt", "student.txt");

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

            while (getline(file, line))
                cout << line << endl;

            file.close();
        }
        else if (choice == 5) {
            cout << "Exiting program.";
        }
        else {
            cout << "Invalid Choice.";
        }

    } while (choice != 5);

    return 0;
}
