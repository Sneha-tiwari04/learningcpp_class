#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v={1,3,6,8};
    cout<<v.size();
    v.pop_back();
    for(auto a:v){
        cout<<a<<" ";
    }
}