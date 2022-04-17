#include<iostream>
using namespace std;


int main(){
    // int a,b;
    // cin>>a>>b;
    // if(a>b){
    //     cout<<"a is greater"<<endl;
    // }else{
    //     cout<<"b is greater"<<endl;
    // }
    
    // Q. charater is given as input as print "lowercase" if it
    // lies between 'a' to 'z' or print "uppercase" if it
    // lies between 'A' to 'Z' or print "numerical" if it lies
    // between '0' to '9'

    // char ch;
    // cin>>ch;
    // if(ch>='a' && ch<='z'){
    //     cout<<"lower case"<<endl;
    // }else if(ch>='A' && ch<='Z'){
    //     cout<<"upper case"<<endl;
    // }else if(ch>='0' && ch<='9'){
    //     cout<<"numerical"<<endl;
    // }

    // Q. print 1 to n

    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     cout<<i<<" ";
    //     i++;
    // }

    // Q. print sum from 1 to n

    // int sum=0;
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     sum+=i;
    //     i++;
    // }
    // cout<<sum<<endl;

    // Q. print sum of all even numbers from 1 to n
    // int sum=0;
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     if((i%2)==0){
    //         sum+=i;   
    //     }
    //     i=i+1;
    // }
    // cout<<sum<<endl;

    // Q. prime number

    int n;
    cin>>n;
    int count=0;
    for(int i=2; i*i<=n;i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count==0){
    cout<<"prime"<<endl;
    }else{
        cout<<"not prime"<<endl;
    }


}