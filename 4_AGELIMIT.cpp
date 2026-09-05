#include <iostream>
#include <string>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
  { 
   int X,Y,A;
   //Accept 3 integers inputs.
   cin>>X>>Y>>A;    
    if (A>=X && A<Y){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

   }
 return 0;
}
