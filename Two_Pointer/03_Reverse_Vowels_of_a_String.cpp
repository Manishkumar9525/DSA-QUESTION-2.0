/*
Question: Reverse Vowels of a String

Given a string, reverse only the vowels in the string and return the
resulting string.

The vowels are 'a', 'e', 'i', 'o', and 'u'. They may appear in both
uppercase and lowercase. All non-vowel characters must remain in their
original positions.

Example 1:
Input:  s = "hello"
Output:    "holle"

Example 2:
Input:  s = "leetcode"
Output:    "leotcede"

Example 3:
Input:  s = "aA"
Output:    "Aa"
*/

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' ||
           ch == 'O' || ch == 'U';
}

string reverseVowels(string str) {
  int s=0;int e=str.size()-1;
  while(s<=e){
     if(!isVowel(str[s])){
      s++;
     }else if(!isVowel(str[e])){
      e--;
     }else{
      swap(str[s],str[e]);
      s++;e--;
     }
  }
  return str;
}

int main() {
  string str="leetcode";
  string ans=reverseVowels(str);
 cout<<ans;
}
