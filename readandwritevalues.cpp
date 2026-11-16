
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int age = 18;
    float marks = 90.5;

    ofstream fout("data.txt");
    fout << age << endl;
    fout << marks << endl;
    fout.close();

    int a;
    float m;
    ifstream fin("data.txt");

    fin >> a;
    fin >> m;
    fin.close();

    cout << "Age: " << a << endl;
    cout << "Marks: " << m << endl;
    return 0;
}
