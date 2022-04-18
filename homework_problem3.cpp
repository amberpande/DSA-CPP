#include <iostream>
using namespace std;

int arithmeticProgession(int n){
    return (3 * n + 7);
}

int main(){
    int n;
    cin>>n;

    cout<<"Answer: "<< arithmeticProgession(n)<<endl;
    return 0;
}