#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    //Patter 1:

    // int i=1;
    // while (i<=n)
    // {
    //     int j=1;
    //     while(j<=n){
    //         cout<<"*";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }


    //Pattern 2:

    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<i;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //Pattern 3:

    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<n-j+1;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }
    
    //Patter 4:

    // int i=1;
    // int count = 1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<count<<" ";
    //         count=count+1;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //Pattern 5;

    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<"*"<<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //Pattern 6;

    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<i<<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //pattern 7;

    // int i=1;
    // int count=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<count<<" ";
    //         count=count+1;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //pattern 8;

    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     int k=i;
    //     while(j<=i){
    //         cout<<k<<" ";
    //         k=k+1;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //pattern 9;

    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<i-j+1<<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //pattern 10

    // int row=1;
    // while (row<=n)
    // {
    //     int col=1;
    //     while(col<=n){
    //         char ch=('A'+row-1);
    //         cout<<ch<<" ";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //pattern 11

    // int row=1;
    // while (row<=n)
    // {
    //     int col=1;
    //     while(col<=n){
    //         char ch=('A'+col-1);
    //         cout<<ch<<" ";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //pattern 12

    // int row=1;
    // char ch='A';
    // while (row<=n)
    // {
    //     int col=1;
    //     while(col<=n){
            
    //         cout<<ch<<" ";
    //         ch++;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //pattern 13

    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         char ch='A'+i+j-2;
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //pattern 14

    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         char ch='A'+i-1;
    //         cout<<ch<<" ";
    //         ch++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //pattern 15

    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         char ch='A'+j+i-2;
    //         cout<<ch<<" ";
    //         ch++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    
    //pattern 16

    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     char ch='A'+n-i;
    //     while(j<=i){
    //         cout<<ch<<" ";
    //         ch++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    
    //pattern 17

    // int i=1;
    // while(i<=n){
    //     int space=n-i;
    //     while (space)
    //     {
    //         cout<<" ";
    //         space--;
    //     }
    //     int j=1;
    //     while (j<=i)
    //     {
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //pattern 18

    int i=1;
    while (i<=n)
    {
        int space=n-i+1;
        while (space<n){
            cout<<" ";
            space++;
        }
        int j=i;
        while(j<=n){
            cout<<'*';
            j++;
        }
        cout<<endl;
        i++;
    }
    

}