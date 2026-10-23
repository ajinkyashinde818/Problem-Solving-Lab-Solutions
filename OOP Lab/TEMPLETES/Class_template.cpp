#include <iostream>
#include <string>
using namespace std;


template <class tem1, class tem2>
class Record {
    tem1 id;
    tem2 value;

public:
    Record(tem1 i, tem2 v) {
        id = i;
        value = v;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Value: " << value << endl;
    }
};

int main() {

    Record r1(101, "Ajinkya");
    Record r2(102, "Rahul");

    r1.display();
    r2.display();

    return 0;
}