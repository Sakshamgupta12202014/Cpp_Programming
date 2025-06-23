#include <bits/stdc++.h>

using namespace std;

void findUpperBound(vector<int> v,int n, int val){

    int low=0, high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;

        if(v[mid] > val){
            ans=mid;
            high=mid-1;
        }
        else if(v[mid] <= val){
            low=mid+1;
        }
    }
    if(ans==-1){
        cout << "Ub for given val is not present in array" << endl;
    }
    else{
        cout << "Ub for : "<<val<<" : "<<v[ans];
    }
}

void findLowerBound(vector<int> v,int n, int val){

    int low=0, high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;

        if(v[mid] >= val){
            ans=mid;
            high=mid-1;
        }
        else if(v[mid] < val){
            low=mid+1;
        }
    }
    if(ans==-1){
        cout << "Lb for given val is not present in array" << endl;
    }
    else{
        cout << "Lb for : "<<val<<" : "<<v[ans];
    }
}

int main() {

    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int elem;
        cin>>elem;
        v.push_back(elem);
    }

    int q;
    cin>>q;

    //1 --> ub
    //2 --> lb
    
    while(q--){
        int x;
        int val;

        cout<<"Enter query two space seperated numbers : ";
        cin>>x>>val;

        if(x==1){
            //ub
            findUpperBound(v,n, val);
        }
        if(x==2){
            //lb
            findLowerBound(v,n, val);
        }
    }
    return 0;
}