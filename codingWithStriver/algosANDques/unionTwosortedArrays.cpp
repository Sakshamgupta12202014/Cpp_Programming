#include <bits/stdc++.h>

using namespace std;

void printVector(vector<int> &vec,int size) {

    cout << "printing Vector" << endl;
    for(int i=0; i<vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

void unionOfTwoSortedArrays(vector<int> &arr1,vector<int> &arr2, int n1, int n2) {

    int i=0;
    int j=0;
    

    vector<int> unionArr ;

    while(i<n1 && j<n2) {

        if(arr1[i] <= arr2[j] ) {

            if(unionArr.size()==0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
                i++;
            }
            else{
                i++;
            }

        }

        else if( unionArr.size()==0 || arr1[i] > arr2[j]) {
            if( unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
                j++;
            }
            else{
                j++;
            }
        }
    }
    while( i<n1) {
        if(unionArr.back() != arr1[i]){
            unionArr.push_back(arr1[i]);
            i++;
        }
        else{
            i++;
        }
    }
    while( j<n2 ) {
        if(unionArr.back() != arr2[j]){
            unionArr.push_back(arr2[j]);
            j++;
        }
        else{
            j++;
        }
    }

    printVector(unionArr, unionArr.size());

}


int main() {

    // Your code goes here 

    vector<int> arr1 = {0,0,1,1,2,3,4,5,7,8,9};
    vector<int> arr2 = {0,0,2,3,4,4,5,6,7,10,11};

    unionOfTwoSortedArrays(arr1, arr2, arr1.size(), arr2.size());
    
    return 0;
}