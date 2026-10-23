#include <iostream>
#include <string> 
using namespace std;


template <typename T>
bool searchRecord(T records[], int size, T key) {
    for (int i = 0; i < size; i++) {
        if (records[i] == key) {
            return true; 
        }
    }
    return false; 
}

int main() {
    int ids[] = {101, 102, 103};
    string names[] = {"Ajinkya", "Rahul", "Amit"};

    if (searchRecord(ids, 3, 102))
        cout << "Account ID found." << endl;
    else
        cout << "Account ID not found." << endl;

  
    if (searchRecord(names, 3, string("Rahul")))
        cout << "Customer name found." << endl;
    else
        cout << "Customer name not found." << endl;

    return 0;
}
