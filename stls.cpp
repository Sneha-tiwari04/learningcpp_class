#include<iostream>
#include<vector>
using namespace std;
int main(){
int s, num;
vector<int> v;
cout <<"enter a size";
cin>>s;
for(int i=0; i<s; i++){
    cout<<"enter a no:";
    cin>>num;
    v.emplace_back(num);
}
for(auto a:v){
    cout<<a<<" ";
}
}

