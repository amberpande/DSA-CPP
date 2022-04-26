#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){
    int key;
    cout<<"Enter the key to search: "<<endl;
    cin>>key;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    bool result = linearSearch(arr, size, key);

    if(result == true){
        cout<<"Key found"<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }

}