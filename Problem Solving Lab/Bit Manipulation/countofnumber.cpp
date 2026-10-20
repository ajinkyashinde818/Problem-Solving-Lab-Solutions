#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    for (int x = 0; x <= n; x++) {
        if (n + x == (n ^ x)) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}