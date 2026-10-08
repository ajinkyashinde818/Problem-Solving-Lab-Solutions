#include <iostream>
using namespace std;

int main() {
    string a, b, c;

    cin >> a >> b >> c;

    if (a.length() + b.length() != c.length()) {
        cout << "Not a valid shuffle";
        return 0;
    }

    int i = 0, j = 0;

    for (int k = 0; k < c.length(); k++) {

        if (i < a.length() && c[k] == a[i]) {
            i++;
        }
        else if (j < b.length() && c[k] == b[j]) {
            j++;
        }
        else {
            cout << "Not a valid shuffle";
            return 0;
        }
    }

    if (i == a.length() && j == b.length())
        cout << "Valid shuffle";
    else
        cout << "Not a valid shuffle";

    return 0;
}