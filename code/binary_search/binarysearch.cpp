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

// int n=nums.size();
// vector<long long>arr(n+2);
// arr[0]=LONG_MIN;
// arr[n+1]=LONG_MIN;
// for(int i=1;i<=n;i++){
// arr[i]=nums[i-1];
// }
// int st=1,end=n;
// while(st<=end){
// int mid=st+(end-st)/2;
// if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
// return mid-1;
// }
// if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
// st=mid+1;
// }
// else end=mid-1;

// }
// return -1;