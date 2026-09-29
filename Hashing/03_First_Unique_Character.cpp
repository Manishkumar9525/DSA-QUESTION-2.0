#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Find the index of the first non-repeating character in a string.
// Input: s = "leetcode"
// Output: 0


int First_Unique_Character(string s){
   unordered_map<char,int>mp;
   for(char x:s){
    mp[x]++;
   }

   for(int i=0;i<s.size();i++){
      if(mp[s[i]]==1){
        return i;
      }
   }
   return '\0';
}

int main()
{
  string s="vvffwfgfty";
  int result=First_Unique_Character(s);
  cout<<result;
    return 0;
}
