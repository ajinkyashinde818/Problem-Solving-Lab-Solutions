#include<iostream>
using namespace std;

int main(){
    int n,sum;
    cout<<"Enter a Num:";
    cin>>n;

    for(int i=1;i<=n;i++){
        int num = i;

        while(num > 0) {
            sum += num % 2;
            num = num / 2;
        }
    }
    cout<<"The Total Bits="<<sum;
    return 0;
}
