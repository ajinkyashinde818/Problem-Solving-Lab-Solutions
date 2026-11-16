#include<iostream>
#include<list>
using namespace std;

int main(){
    list Toyota={"Fortuner","Innova"};
    Toyota.push_front("Glanza");
    Toyota.push_back("Camry");
    Toyota.remove("Innova");

    for (const string& model : Toyota) {
        cout << "Toyota all Models: " << model << endl;
    }

    cout<<"The Size is: "<<Toyota.size()<<endl;

    return 0;
}