// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int base, power;
     int result= 1;
    
    cout<<"enter base:";
    cin>>base;
    
    cout<<"enter exponent";
    cin>>power;
    
    for(int i = 1; i<= power; ++i)
    {result *= base;}
    
    
    cout<<result;
    

    return 0;
}