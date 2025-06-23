// #include <bits/stdc++.h>

// using namespace std;

// int main() {

//     vector<string> ans;
//     unordered_set<string> st;
//     string s="I am a good programmer";
//     string s2="am good";

    
//     string temp="";
//     for(int i=0; i<s.length(); i++){
//         if(s[i] != ' '){
//             temp.push_back(s[i]);
//         }
//         else{
//             st.insert(temp);
//             temp="";
//         }
//     }
//     st.insert(temp);

//     for(auto it : st){
//         cout << it << "  ";
//     }
    
//     // temp="";
//     // set<string> st2;

//     // for(int i=0; i<s2.length(); i++){
//     //     if(s2[i] != ' '){
//     //         temp.push_back(s2[i]);
//     //     }
//     //     else{
//     //         st2.insert(temp);
//     //         temp="";
//     //     }
//     // }
//     // st2.insert(temp);

//     // for(auto it : st){
//     //     if(st2.find(it)==st2.end()){
//     //         ans.push_back(it);
//     //     }
//     // }
//     // for(auto it : ans){
//     //     cout << it << "  ";
//     // }
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

vector<string> getWords(string s){
    vector<string> words;
    string word="";

    for(int i = 0; i < s.length(); i++) {
        if(s[i] != ' ') {
            word += s[i];
        } else if(!word.empty()) {
            words.push_back(word);
            word.clear();
        }
    }

    if(!word.empty()){
        words.push_back(word);
    }

    return words;
}

void print(vector<string> words){
    for(auto it : words){
        cout << it << "  ";
    }
    cout << endl;
}

int main() {

    // vector<string> ans;
    // string s1 = "I am a good programmer in C++ programming language";
    // string s2 = "am good in ";
    
    // vector<string> words1 = getWords(s1);

    // unordered_set<string> words2_set;
    // for(auto it : getWords(s2)){
    //     words2_set.insert(it);
    // }

    // //check which is not present 
    // for(auto it : words1){
    //     if(words2_set.find(it)==words2_set.end()){
    //         ans.push_back(it);
    //     }
    // }
    // print(ans);

    set<string> st;
    string s1 = "I am a good programmer";
    string word = "";
    
    // Adding words to set
    for(int i = 0; i < s1.length(); i++) {
        if(s1[i] != ' ') {
            word += s1[i];
        }
        else {
            st.insert(word);
            word = "";
        }
    }
    // Don't forget the last word
    if(!word.empty()) {
        st.insert(word);
    }
    
    // Print to see order
    for(string w : st) {
        cout << w << " ";
    }
    
    return 0;
}