#include <bits/stdc++.h>

using namespace std;

int main() {

    set<int>s;
    
    int q;
    cin>>q;
    while(q--){
        int type, val;
        cout<<"Enter query(2 space separated numbers) : ";
        cin>>type>>val;

        if(type==1){
            //insert val
            s.insert(val);
            cout << val << " inserted into the set." << endl;
        }
        else if(type==2){
            auto ub=s.upper_bound(val);
            if(ub==s.end()){
                cout << "Ub for " << val << " is not present in array"<<endl;
            }else{
                cout << "Ub for " << val << " is "<<*ub<<endl;
            }
        }
        else if(type==3){
            auto lb=s.lower_bound(val);
            if(lb==s.end()){
                cout << "lb for " << val << " is not present in array"<<endl;
            }else{
                cout << "lb for " << val << " is "<<*lb<<endl;
            }
        }
        else{
            cout << "invalid type !!" << endl;
        }
    }
    return 0;
}