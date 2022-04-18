#include<iostream>
using namespace std;

int countSetBits(int a){
    if (a == 0) 
    {
        return a; 
        } 
    int count = 0; 
    while (a != 0){ 
        a &= (a - 1); 
        count++; 
        } 
    return count; 
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<"Answer: "<<countSetBits(a)+countSetBits(b)<<endl;

    return 0;
}