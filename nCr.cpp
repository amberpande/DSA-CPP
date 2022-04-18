#include<iostream>
using namespace std;    

int fatorial(int n){
    int fact = 1;
    if(n==0)
        return 1;
    else{
        for(int i=1;i<=n;i++){
            fact = fact*i;
        }
        return fact;
    }
}

int nCr(int n, int r){
 int ans = ((fatorial(n))/(fatorial(r)*fatorial(n-r)));
 return ans;
}
int main(){
    int n, r;
    cin>>n>>r;
    cout<<"Answer: "<< nCr(n,r)<<endl;

    return 0;
}