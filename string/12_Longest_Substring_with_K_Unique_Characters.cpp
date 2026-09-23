// Question: Find the length of the longest substring with exactly K unique characters.
//
// Example Input:
// String: "aabacbebebe"
// K: 3
//
// Example Output:
// 7

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int longestSubstring(string s,int k){
  int left=0;
  int maxlen=-1;
  unordered_map<char,int>mpp;

  for(int right=0;right<s.length();right++){
    mpp[s[right]]++;

    while(mpp.size()>k){
      mpp[s[left]]--;
      if(mpp[s[left]]==0){
        mpp.erase(s[left]);
      }
      left++;
    }
    if(mpp.size()==k){
      maxlen=max(maxlen,right-left+1);
    }
  }
  return maxlen;
}


int main() {

   string s = "aabacbebebe";
    int k = 3;
    cout << longestSubstring(s, k);
    return 0;
    
}
