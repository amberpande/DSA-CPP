#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    char op;

    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    
    cout<<"Enter the second number: "<<endl;
    cin>>num2;
    if(num2<=0){
        cout<<"Invalid input"<<endl;
        return 0;
    }

    cout<<"Enter the operator: "<<endl;
    cin>>op;

    switch (op)
    {
    
    case '+': cout<< num1 + num2 <<endl;
        break;
    case '-': cout<< num1 - num2 <<endl;
        break;
    case '*': cout<< num1 * num2 <<endl;
        break;
    case '/': cout<< num1 / num2 <<endl;
        break;
    case '%': cout<< num1 % num2 <<endl;
        break;
    
    default: cout<<"Invalid operation"<<endl;
        break;
}
return 0;
}