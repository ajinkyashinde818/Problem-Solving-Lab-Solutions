#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> marks;

    marks.push_back(80);
    marks.push_back(90);
    marks.push_back(75);
    marks.push_front(85);

    cout << "Marks using List:" << endl;

    for(int x : marks) {
        cout << x << " ";
    }

    cout << "\n\nFirst element: " << marks.front();
    cout << "\nLast element: " << marks.back();

    return 0;
}