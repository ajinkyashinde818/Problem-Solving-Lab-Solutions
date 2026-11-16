#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v={12,24,36};
    v.push_back(48);
    v.insert(v.begin(),0);
    v.pop_back();
    v.erase(v.begin());

    for (int i = 0; i < v.size(); i++) {
        cout<<"The Element is: "<< v[i] << "\n ";
    }
    cout << endl;
    cout<<"The Size is: "<<v.size()<<endl;
    

    return 0;
}