
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("student.txt");

    string word, search;
    int count = 0;

    cout << "Enter word to search: ";
    cin >> search;

    while (file >> word) {
        if (word == search) {
            count++;
        }
    }

    file.close();

    cout << "Occurrence of " << search << " = " << count;

    return 0;
}
