#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main() {
    string name = "Ajinkya";

    for (char letter : name) {
        if (letter == ' ') continue;

        int ascii_value = letter;

        cout << letter << " -> Decimal: " << ascii_value 
             << " | Binary: " << bitset<8>(ascii_value) << endl;
    }
    
    return 0;
}
