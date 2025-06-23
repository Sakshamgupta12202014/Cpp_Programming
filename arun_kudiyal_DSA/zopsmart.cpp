#include <bits/stdc++.h>
using namespace std;


class ReverseString {

string s;
public:

void setString(string s) {
    this->s = s;
}

string reverseEachWordInString() {

    string s = this->s;
    string word = "";
    string finalString = "";
    string reverse;

    for(int i=0; i<(s.size()); i++) {
        if(  /*s[i] != ' ' && s[i] != '.' && s[i] != '?' && s[i] != ',' && s[i] != '!' && s[i] != ';'*/ isalnum(s[i])) {
            word.push_back(s[i]);
        }
        else{
            reverse = "";
            reverseWord(word, 0, reverse);
            finalString += reverse + s[i];
            word.clear();
        }
    }
    reverse.clear();

    reverseWord(word, 0, reverse);
    finalString += reverse;
    return finalString;
}

void reverseWord(string word, int idx, string &reverse) {

    if(idx >= word.size()) { return; }

    // recursion kahega ki mai poori string ko reverse nahi kar payunga, but idx+1 se kr lunga reverse
    reverseWord(word, idx+1, reverse);
    reverse.push_back(word[idx]);
}

};

int main() {

ReverseString* s = new ReverseString();
s->setString("zopsmart is hiring");

string reverseEachWord = s->reverseEachWordInString();

cout << reverseEachWord << endl;

ReverseString* s1 = new ReverseString();
s1->setString("I will ! do ? anything");

reverseEachWord = s1->reverseEachWordInString();
cout << reverseEachWord << endl;

return 0;
}