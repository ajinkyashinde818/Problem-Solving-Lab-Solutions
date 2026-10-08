#include<iostream>
using namespace std;

int main(){
    int num = 6;
    int original=num;
    int square=num*num;
    int sum=0;

    while(square>0){
        int digit = square % 10;
        sum = sum + digit;
        square = square / 10;
    }

    if(sum==original){
        cout<<sum<<":is a Neon Number";
    }else{
        cout<<sum<<":is not a Neon Number";
    }

    return 0;
}