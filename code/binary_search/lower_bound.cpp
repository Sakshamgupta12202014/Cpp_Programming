#include <bits/stdc++.h>

using namespace std;

void findLowerbound(vector<int> v, int n){

    int st=0, end=v.size()-1;
    int ans=v.size();
    while(st<=end){
        int mid=st + (end-st)/2;

        if(v[mid]>=n){
            ans=mid;
            end=mid-1;
        }
        else if(v[mid]<n){
            st=mid+1;
        }
    }
    cout << "lower bound is index " << ans << endl;
}
int main() {

    //binary search
    vector<int> nums = {1,2,3,3,5,8,8,10,10,11};
    int target;
    cout << "target : ";
    cin>>target;
    findLowerbound(nums, target);

    return 0;
}