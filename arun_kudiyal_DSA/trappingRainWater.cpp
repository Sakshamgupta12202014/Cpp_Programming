#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> arr = {3 ,0 ,1 ,0 ,4 ,0 ,2};
    vector<int> leftMax(arr.size());
    vector<int> rightMax(arr.size());

    int maxi = arr[0];
    for(int i=0; i<arr.size(); i++) {
        leftMax[i] = maxi;
        
        if(arr[i] > maxi) maxi = arr[i];
    }

    maxi = arr[arr.size()-1];
    for(int i=arr.size()-1; i>=0; i--) {
        rightMax[i] = maxi;
        
        if(arr[i] > maxi) maxi = arr[i];
    }
        
    for(int i=0 ; i<leftMax.size(); i++){
        cout << leftMax[i] << "  ";
    }
    cout << endl;
    for(int i=0 ; i<rightMax.size(); i++){
        cout << rightMax[i] << "  ";
    }

    cout << endl;

    int totalWater = 0;
        for(int i=1; i<arr.size()-1; i++) {
            int water = min(leftMax[i], rightMax[i]) - arr[i];
            totalWater += water;
        }
    cout << totalWater << endl;
    return totalWater;
}        

