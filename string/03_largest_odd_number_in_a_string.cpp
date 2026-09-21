#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Find the largest odd number in a string.
//
// Input:
// String: 52
//
// Output:
// Largest odd number is 5.

string largeOddNum(string text){
    int e=text.length()-1;
    while(e>=0 && (text[e]-'0')%2==0){
        e--;
    }
    int s=0;
    while(s<e && text[s]=='0'){
        s++;
    }
    return text.substr(s,e-s+1);
}



int main() {
    string text="0214638";
    string result= largeOddNum(text);
    cout<<result;
    return 0;
}
