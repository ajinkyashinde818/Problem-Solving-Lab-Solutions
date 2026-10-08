#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter a Number:"<<endl;
    cin>>num;

    if(num%10==7 ||num%7==0){
        cout<<num<<": is a Buzz Number:"<<endl;
    }else{
        cout<<num<<":is not a Buzz Number:"<<endl;
    }

    return 0;
}