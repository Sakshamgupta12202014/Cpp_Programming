#include <bits/stdc++.h>

using namespace std;

bool canWePlaceCows(int d, int n, int size, vector<int> stalls){
    vector<int> cp(size,0);
    int cnt=0;
    int last;

    for(int i=0; i<size; i++){
        if(i==0){
            cp[i]=1;
            last=i;
            cnt++;
        }
        else{
            if(cnt<n){
                if((stalls[i] - stalls[last]) >= d){
                    cp[i]=1;
                    last=i;
                    cnt++;
                }
            }
        }
    }
    if(cnt==n){ 
        return true;
    }
    return false;

}

int main() {

    vector<int> stalls = {0, 3, 4, 7, 9, 10};
    int size=stalls.size();
    int cows=5;

    int low=1, high=stalls[size-1]-stalls[0];
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(canWePlaceCows(mid, cows, size, stalls)){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(ans!=-1){
        cout << "The final Maximum possible value  is : " << ans << endl;
        return 0;
    }
    cout << "there is no answer possible" << endl;
    return 0;
}
        // cout << "---------------------------------------" << endl;
        // cout << "cows position are :  ";
        // for(int i=0; i<size; i++){
        //     cout << cp[i] << "  ";
        // }
        // cout << endl;
        // cout << "---------------------------------------" << endl;

    // int min_dist=4;
    // cout<<canWePlaceCows(min_dist, cows, size, stalls);