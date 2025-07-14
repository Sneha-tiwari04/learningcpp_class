#include<iostream>
using namespace std;
int main(){
int arr[]={5,7,0,0,8,7,0,8,0};
int s=sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<s; i++){

for( int j=i+1; j<s; i++) {
 

    if(arr[j] > arr[i]){
        int temp=(arr[i]);
        arr[i]=arr[j];
        arr[j]=temp;

    }
}

}



for(int i=0; i<s; i++){
    cout<<arr[i]<<"=";
}

}   
        






























































        
        
        
       
    

}
}