//https://leetcode.com/problems/number-of-1-bits/

#include<iostream>
using namespace std;

int hammingWeight(uint32_t n) {
    int count=0;
    while(n!=0){
        //checking last bit
        if(n&1){
            count++;
        }
        n=n>>1; //right shift
    }
    return count;
}
int main(){
int n=00000000000000000000000000001011;
cout<<hammingWeight(n);
}