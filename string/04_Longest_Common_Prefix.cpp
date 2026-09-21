// Question: Find the longest common prefix among an array of strings.
//
// Example Input:
// 3
// flower flow flight
//
// Example Output:
// fl

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>str){
  string first=str[0];
  for(int i=1;i<str.size();i++){
     int j=0;
     while(j<first.size() && j<str[i].size() && first[j]==str[i][j]){
      j++;
     }
     first=first.substr(0,j);
  }
  return first;
}


int main() {
 vector<string>str = {"flowers" , "flow" , "fly", "flight" };
 string result=longestCommonPrefix(str);
 cout<<result;
   
    return 0;
}
