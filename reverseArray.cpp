// Reverse the given array
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int temp;
    for(int i=0; i<size/2; i++){
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size;
    int arr[10];
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    cout<<"Enter the elements of the array: "<<endl;
    for (int i=0; i<size; i++){
        cin>>arr[i];
    }
    reverseArray(arr, size);
    printArray(arr, size);

}