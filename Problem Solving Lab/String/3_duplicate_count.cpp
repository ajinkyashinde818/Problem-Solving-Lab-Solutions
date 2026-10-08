#include <iostream>
#include <map>
using namespace std;

int main() {
    string str;
    cin >> str;

    map<char, int> count;

    // Count each character
    for (char ch : str) {
        count[ch]++;
    }

    // Print duplicates
    for (auto x : count) {
        if (x.second > 1) {
            cout << x.first << " : " << x.second << endl;
        }
    }

    return 0;
}