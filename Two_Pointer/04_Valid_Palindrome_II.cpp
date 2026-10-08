/*
Question: Valid Palindrome II

Given a string, determine whether it can become a palindrome after deleting
at most one character.

Return true if the string can be converted into a palindrome by deleting
zero or one character; otherwise, return false.

Example 1:
Input:  s = "aba"
Output:    true
Explanation: The string is already a palindrome.

Example 2:
Input:  s = "abca"
Output:    true
Explanation: Delete the character 'c' to obtain "aba".

Example 3:
Input:  s = "abc"
Output:    false
Explanation: Deleting at most one character cannot make the string a
palindrome.
*/

#include <bits/stdc++.h>
using namespace std;

bool validPalindrome(string str) {
 int s=0;int e=str.size()-1;
 while(s<=e){
   if(str[s]!=str[e]){
    return false;
   }
   s++;e--;
 }
return true;
}

int main() {
  string str="abc";
  bool result=validPalindrome(str);
  if(result){
    cout<<"true";
  }else{
    cout<<"false";
  }
}
