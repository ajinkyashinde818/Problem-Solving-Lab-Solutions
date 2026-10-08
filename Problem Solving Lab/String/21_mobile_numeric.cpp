#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    string keypad[] = {
        "2", "22", "222",
        "3", "33", "333",
        "4", "44", "444",
        "5", "55", "555",
        "6", "66", "666",
        "7", "77", "777", "7777",
        "8", "88", "888",
        "9", "99", "999", "9999"
    };

    for (char ch : str) {
        if (ch == ' ') {
            cout << "0";
        }
        else {
            ch = tolower(ch);
            cout << keypad[ch - 'a'];
        }
    }

    return 0;
}