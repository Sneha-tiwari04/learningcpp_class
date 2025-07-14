#include <iostream>
using namespace std;
int main(){
   int arr[]={5,6,7,9,8,5,5,4,3,3};
    int s= sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<s; i++){
        if(arr[i]==-1){
            continue;
        }
        int count=1;
        for(int j=i+1; j<s; j++){
            if(arr[j]==arr[i]){
                count++;
                arr[j]=-1;
            
      
        }
         
        
    }
   cout<<arr[i]<<"="<<count<<endl;
}
}
