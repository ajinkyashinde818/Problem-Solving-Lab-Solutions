#include<iostream>
#include<vector>
#include<utility>
using namespace std;

class Box{
public:
    vector<int> transactions;
};

int main(){

    Box boxA;

    boxA.transactions.push_back(100);
    boxA.transactions.push_back(200);
    boxA.transactions.push_back(300);

    cout << "Box A size before move: "
         << boxA.transactions.size() << endl;

    Box boxB;
    boxB = move(boxA);

    cout << "\n--- After Moving ---" << endl;

    cout << "Box B size: "<< boxB.transactions.size() << endl;

    cout << "Box A size: "<< boxA.transactions.size() << endl;

    cout << "\nTransactions in Box B:" << endl;

    for(int i = 0; i < boxB.transactions.size(); i++){
        cout << boxB.transactions[i] << endl;
    }

    return 0;
}