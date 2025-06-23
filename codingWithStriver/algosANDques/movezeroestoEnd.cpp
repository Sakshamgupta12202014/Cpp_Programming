#include <bits/stdc++.h>

using namespace std;

void moveZeroesToEnd(vector<int> &arr, int size) {

    int i=0;
    int j=0;

    while( i<size && j<size ) {

        if( arr[j] == 0) {
            j++;
        }
        else{
            //swap 
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j++;
        }
    }
}

void printVector(vector<int> &vec,int size) {

    cout << "printing Vector" << endl;
    for(int i=0; i<vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {

    // Your code goes here 
    vector<int> arr = {1,0,2,3,2,0,0,4,5,1};

    moveZeroesToEnd(arr, arr.size());
    printVector(arr,arr.size());
    
    return 0;
}