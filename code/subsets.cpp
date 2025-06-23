#include <bits/stdc++.h>

using namespace std;


int power(int base, int p){
    if(p==0) return 1;

    int ans=base*power(base,p-1);
    return ans;
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;

    int n=nums.size();
    int total=power(2,n);
    for(int i=0; i<total; i++){
        int num=i;
        vector<int> temp;
        for(int j=0; j<n; j++){
            if((num&(1<<j)) > 0){
                temp.push_back(nums[j]);
            }
        }
        
        ans.push_back(temp);
    }
    return ans;
}

int main() {

    vector<int> v={1,2,3};

    return 0;
}