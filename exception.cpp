// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout<<"Enter a Value of A and B:";
//     cin>>a>>b;
    
//     try{
//         if(b==0){
//             throw "The Number is not divisible by Zero";
//         }
//         cout<<"Result:"<<a/b<<endl;
//     }
//     catch(const char* e){
//         cout<<"This get a Error:"<<e<<endl;
//     }
//    return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    try {
        if(age<18){
            throw "Age Must be greater than 18.";
        }
        
        cout << "Access Granted. You are eligible to vote!" << endl;
    }
    catch (const char* e) {
        cout << "Error: " << e << endl;
    }

    return 0;
}