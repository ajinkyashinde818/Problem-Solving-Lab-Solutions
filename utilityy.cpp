#include<iostream>
#include<utility>
#include<string>
#include<vector>
using namespace std;

// int main(){
//     int a=5;
//     int b;
//     b=move(a);
//     cout<<"After Moving A into B:"<<b<<endl;
//     cout <<"Value of A after move:"<<a<<endl;

//     string name="Ajinkya";
//     string moved;
//     moved=move(name);
//     cout<<"\n";
//     cout<<"After Moving Name into Moved:"<<moved<<endl;
//     cout <<"Value of Name after move:"<<name<<endl;
//     return 0;
// }



// class Box {
// public:
//     string content; 
// };

// int main() {
//     Box boxA;
//     boxA.content = "Gold Medal"; 
//     cout << "Box A contains: " << boxA.content << endl;

//     Box boxB;
//     boxB = move(boxA); 

//     cout << "\n--- After Moving ---" << endl;
//     cout << "Box B contains: " << boxB.content << endl; 
//     cout << "Box A contains: " << boxA.content << endl; 

//     return 0;
// }



class Box {
public:
    vector<int> numbers; 
};

int main() {
    Box boxA;
    boxA.numbers.push_back(10);
    boxA.numbers.push_back(20);
    boxA.numbers.push_back(30);

    cout << "Box A vector size before move: " << boxA.numbers.size() << endl;

    Box boxB;
    boxB = move(boxA); 

    cout << "\n--- After Moving ---" << endl;
    cout << "Box B vector size: " << boxB.numbers.size() << endl; 
    cout << "Box A vector size: " << boxA.numbers.size() << endl; 
    return 0;
}
