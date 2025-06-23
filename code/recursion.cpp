#include <bits/stdc++.h>
using namespace std;

vector<int> ans={0,1,2,3,4,5,6,7,8,9};

void f(int idx,int n){
    if(idx==n) return ;

    f(idx+1, n);
    cout << ans[idx] << "  ";
}


void combinationSum(vector<int> v, int idx, int temp){
    
}

int main() {

    f(0, ans.size());
    return 0;
}

