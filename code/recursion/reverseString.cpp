#include <bits/stdc++.h>

using namespace std;

void reverse(string str,int i, string &temp){

    if(i>=str.length()){
        return;
    }
    reverse(str , i+1, temp);   //recursion tum i+1 se string reverse karo aur fir current index add krdo 
    temp+=str[i];
}
int main() {

    string str="abcdef";
    string temp="";
    reverse(str,0,temp);
    cout << temp << endl;
    return 0;
}