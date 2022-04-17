#include<iostream>
using namespace std;


//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

int subtractProductAndSum(int n) {
        
    int prod=1;
    int sum=0;
    while(n!=0){
        int num=n%10;
        prod=prod*num;
        sum=sum+num;

        n=n/10;
    }
    int ans = prod-sum;
    return ans;

    }

int main(){
    int n;
    cin>>n;
    cout<<subtractProductAndSum(n);
    }
