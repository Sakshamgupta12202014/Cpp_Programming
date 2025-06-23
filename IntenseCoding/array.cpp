#include<iostream>
using namespace std;

int main(){
    int arr[5]={10,30,40,50},index,element;
    cout<<"Enter element to be added: ";
    cin>>element;
    cout<<"Enter the index: ";
    cin>>index;
    for(int i=(sizeof(arr)/sizeof(arr[0]))-1;i>=index-1;i--){
        arr[i+1]=arr[i];
    }
    arr[index-1]=element;
    for(int i=1;i<=5;i++){
        cout<<arr[i-1]<<"    ";
    }
    return 0;
}