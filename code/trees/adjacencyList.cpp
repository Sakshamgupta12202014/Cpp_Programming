#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>arr[n+1];

    for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y;
    arr[x].push_back(y);
    arr[y].push_back(x);
    }

    for(int i=1;i<=n;i++){
        cout<<i<<" :";
        for(auto it:arr[i]){
        cout<<it<<" ";
        }
        cout<<endl;
    }
}
int main() {

    // solve();
    set<string> s;
    s.insert("gfg");
    s.insert("gfg");
    
    cout << s.size() << endl;
    return 0;
}