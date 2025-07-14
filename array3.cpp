#include<iostream>
using namespace std;
int main(){

    int arr[]={ 1,3,67,8,9};
    int ans=0;
    int s= sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<s; i++){
        ans=ans+arr[i];
    }
  cout<<ans;  


for (int i=4; i>=0; i-- )
cout<<arr[i]<<endl;
}