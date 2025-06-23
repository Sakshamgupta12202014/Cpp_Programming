#include <bits/stdc++.h>

using namespace std;

void solve(){
    int arr[10] = {2,2,2,3,3,3,5,5,5,5};
    // output --> [5,5,5,5,3,3,3,2,2,0]

    map<int,int> mp;
    // keys=array elem, values=frequency

    int sizeOfMap = 0;
    for(int i=0; i<10; i++){
        if(mp.find(arr[i])==mp.end()){
            mp[arr[i]] = 1;
            sizeOfMap++;
        }
        else if(mp.find(arr[i]) != mp.end()){
            mp[arr[i]]++;
        }
    }

    // for(auto pair : mp){
    //     cout << pair.first << "  " << pair.second << endl;
    // }

    int newSize = 0;
    while(sizeOfMap > 0){

        int maxFreq = INT_MIN;
        int elem;
        for(auto pair : mp){
            cout << pair.first << "  " << pair.second << endl;
            if(pair.second != -1 && pair.second > maxFreq){
                maxFreq = pair.second;
                elem=pair.first;
            }
        }
        mp[elem] = -1;

        while(maxFreq > 0){
            arr[newSize] = elem;
            newSize++;
            maxFreq--;
        }
        sizeOfMap--;
    }

    for(int i=0; i<10; i++){
        cout << arr[i] << "  " ;
    }

}
int main() {

    solve();
    // int arr[4]={1,3,2,-1};
    // int minE=INT_MAX;
    // int maxE=INT_MIN;

    // for(int i=0; i<4; i++){
    //         if(arr[i] < minE) minE=arr[i];
    //         if(arr[i] > maxE) maxE=arr[i];
    // }

    // cout << "Min ele : " << minE << " and max ele : " << maxE;
    // return 0;
}