// Question: Given a string, find the first non-repeating character in the string.
//
// Example Input:
// "swiss"
//
// Example Output:
// 'w'

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

char First_Non_Repeating_Character(string str){
  unordered_map<char,int>mpp;
  
  for(char x:str){
    mpp[x]++;
  }
for(char x:str){
   if(mpp[x]==1){
    return x;
   }
}
 return '\0';
}


int main() {
  string str="leetcode";
  char ans=First_Non_Repeating_Character(str);
  if(ans != '\0') {
        cout << ans;
    }
    else {
        cout << "No non-repeating character";
    }

    return 0;
}
