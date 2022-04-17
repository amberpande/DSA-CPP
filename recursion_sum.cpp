#include <"bits/stdc++.h">
using namespace std;

//TRUST the function
// Return the 1 + 2 + (n-1) + n
int sum_n(int n){
    if(n==0){
        return 0;
    }
    int left_part = sum_n(n-1);
    return left_part + n;
}

int factorial(int n){
    
}

int main(){
    int n;
    cin>>n;
    // cout<<sum_n(n);
    cout<<factorial(n);
}