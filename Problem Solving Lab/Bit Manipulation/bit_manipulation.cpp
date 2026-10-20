#include<iostream>
using namespace std;

int main(){
    int a,b,q=0;
    cout<<"Enter a two Number:";
    cin>>a>>b;
    
    if(b==0){
        cout<<"Error";
        return 0;
    }

    for (; a >= b; a -= b) {
        q++;
    }

    cout << "Quotient = " << q;
    return 0;
}
