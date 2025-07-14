#include<iostream>
using namespace std;
int main(){
    int arr[]={4,6,7,8,1};
     int s= sizeof(arr)/sizeof(arr[0]);
    int mm=arr[0];

for(int i=0; i<s; i++){
     
    if( arr[i] <mm){
        mm=arr[i];
    }
}
cout<<mm;
}