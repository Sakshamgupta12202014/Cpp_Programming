#include <bits/stdc++.h>

using namespace std;

int main() {

    
    int arr[11] = {1,2,2,3,3,3,4,5,5,5,5};
    int st=0, end=10;
    int target;
    cout << "target : ";
    cin>>target;
    int ans;
    while(st<end){

        int mid=(st+end)/2;
        if(arr[mid] > target){
            end=mid-1;
        }
        else if(arr[mid] < target){
            st=mid+1;
        }
        else if(arr[mid]==target){
            ans=mid;
            end=mid;
        }
    }
    cout << "the leftmost occurrence of " << target << " is " << ans;
    return 0;
}