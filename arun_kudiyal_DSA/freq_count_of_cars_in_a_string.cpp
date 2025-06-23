#include <bits/stdc++.h>

using namespace std;


// 🧠 How it works:
// 'a' has ASCII value 97

// 'b' is 98, and so on till 'z' = 122

// So 'c' - 'a' gives index from 0 to 25

// For example:

// 'a' - 'a' = 0 → increment freq[0]

// 'p' - 'a' = 15 → increment freq[15]

// 'l' - 'a' = 11 → increment freq[11]

// 'e' - 'a' = 4 → increment freq[4]



int main() {

    int freq[26] = {0};  // only for lowercase letters
    string s = "apple is good for health";

    for(int i=0; i<s.length(); i++) {
        freq[s[i]-'a']++;
    }

    // print occurrence
    for(int i=0; i<s.length(); i++) {
        if(freq[i] > 0) {
            cout << (char)(i+'a')<< " occurs : "<<freq[i] << " times " << endl;
        }
    }


    // if string contains both lowercase and uppercase letters

    int freq1[52] = {0}; // 0-25 for A-Z and 26-52 for a-z

    string s1 = "aaAbsDCesXQA";

    for(int i=0; i<s1.length(); i++){
        if(isupper(s1[i])){
            freq1[s1[i]-'A']++;
        }
        else if(islower(s1[i])){
            // lowercase char
            freq1[s1[i]-'a'+26]++;
        }
    }

    // will print separately
    for(int i=0; i<26; i++){
        if(freq1[i] > 0){
            cout << (char)(i+'A') << " : " << freq1[i] << endl;
        }
    }
    
    for(int i=26; i<52; i++){
        if(freq1[i] > 0){
            cout << (char)(i+'a'-26) << " : " << freq1[i] << endl;
        }
    }
    return 0;
}