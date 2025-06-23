#include <bits/stdc++.h>

using namespace std;

bool findNumber(vector<int> &arr, int num){

    for(int j=0; j<arr.size(); j++){
        if(arr[j]==num){
            return true;
        }
    }
}
int longConsSeq(vector<int> &arr, int size){

    int longest=1;
    for(int i=0; i<size; i++){
        int len=1;
        int num=arr[i];
        while(findNumber(arr, num+1)){
            len++;
            num=num+1;
        }
        if(len>longest) longest=len;
    }
    return longest;
}

int f(vector<int> &arr, int size){

    int longest=1;
    int lastSmaller=INT_MIN;
    int cnt=0;
    for(int i=0; i<size; i++){
        if(arr[i]-1==lastSmaller){
            cnt++;
            lastSmaller=arr[i];
        }
        else if(arr[i]==lastSmaller){
            //do nothing
        }
        else if(arr[i]-1!=lastSmaller){
            cnt=1;
            lastSmaller=arr[i];
        }
        longest=max(longest,cnt);
    }
    return longest;
}

int main() {

    // vector<int> arr={102, 4, 100, 1, 101, 3, 2, 1, 1,5,6,7};
    vector<int> arr={1,2,0,1};

    int ans=longConsSeq(arr,arr.size());
    cout <<  ans << endl;

    sort(arr.begin(),arr.end());
    ans=f(arr,arr.size());
    cout << ans << endl;
    return 0;
}