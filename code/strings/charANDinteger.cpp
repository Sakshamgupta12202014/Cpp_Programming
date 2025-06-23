#include <bits/stdc++.h>

using namespace std;

int main() {

    string name="saksham";

    for(int i=0; i<name.length(); i++){
        char ch=name[i];
        name[i]=ch + 1;
    }

    cout << name << endl;
    return 0;
}