#include <bits/stdc++.h>

using namespace std;

void printArray(int *arr, int size) {

    cout << "printing Array" << endl;
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printVector(vector<int> &vec,int size) {

    cout << "printing Vector" << endl;
    for(int i=0; i<vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

void rotateArrayToRight(vector<int> &arr, int d) {


    int size = arr.size();
    while( d>0 ) {

        int temp = arr[size-1];
        for(int i=size-2; i>=0; i--) {

            arr[i+1] = arr[i];
        }
        arr[0] = temp;
        d--;
    }
}

void rotateArrayToLeft(int *arr, int d, int size) {

    while( d > 0) {

        int temp = arr[0];
        for(int i=1; i<size; i++) {

            arr[i-1] = arr[i];
        }
        arr[size-1] = temp;
        d--;
    }
}

void rotateArrayOptimally(vector<int> &arr, int d) {

    cout << "Using optimal approach" << endl;
    int size = arr.size();
    int true_d = d % size;

    //temp array
    vector<int> temp;
    for(int i=0; i<true_d; i++) {

        temp.push_back(arr[i]);
    }

    //shifting 
    for(int i=true_d; i<size; i++) {
        arr[i-true_d] = arr[i];
    }

    //put back temp
    for(int i=size-true_d; i<size; i++) {
        arr[i] = temp[i-(size-true_d)];
    }

}

int main() {

    int arr[] = {1,2,3,4,5};
    int size = 5;
    int places = 3;
    //left rotate the array by K places
    rotateArrayToLeft(arr, places,size);
    
    //print array after k left rotations
    printArray(arr, size);

    //right rotation
    vector<int> vec = {6,7,8,9,10,11};
    int d = 3;
    // rotateArrayToRight(vec, d);
    rotateArrayOptimally(vec, d);
    printVector(vec, vec.size());
    

    return 0;
}