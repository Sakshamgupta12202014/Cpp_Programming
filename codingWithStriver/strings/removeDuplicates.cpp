#include <bits/stdc++.h>

using namespace std;

int main() {

    string s = "bbabbaaccdd";
    map<char, int> mp;

    for(int i=0; i<s.length(); i++) {

        if(mp.find(s[i]) == mp.end()){
            cout << s[i] << "";
            mp.insert({s[i],1});
        }
    }
    cout << endl;

    vector<int> arr = {0,0,0,1,1,1,2,3,4,4};
    map<int, char> mpp;
    for(int i=0; i<arr.size(); i++) {
        if(mpp.find(arr[i]) == mpp.end()){
            cout << arr[i] << "  ";
            mpp.insert({arr[i], true});
        }
    }

cout << endl;
    vector<int> vec = {4,3,4,2,2,0,0,1,1,0,0,5,6,7,5,4,6,7};
    sort(vec.begin(), vec.end());
    mpp.clear();

    for(int i=0; i<vec.size(); i++) {
        if(mpp.find(vec[i]) == mpp.end()){
            cout << vec[i] << "  ";
            mpp.insert({vec[i], true});
        }
    }

    return 0;
}