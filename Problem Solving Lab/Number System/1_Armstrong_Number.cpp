#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x=153;
    int original=x;
    int n=3;
    int sum=0;

    while(x>0){
        int digit = x % 10;
        sum=sum+pow(digit, n);
        x=x /10;
    }

    if (sum == original){
        cout << original << " is an Armstrong Number." << endl;
    } else {
        cout << original << " is Not an Armstrong Number." << endl;
    }
    
    return 0;
}