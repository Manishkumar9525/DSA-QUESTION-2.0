/*
Question: Reverse String

Write a function that reverses a string in-place.

The input is given as an array of characters. Do not return a new array;
modify the input array directly using constant extra memory.

Example 1:
Input:  s = ["h", "e", "l", "l", "o"]
Output:    ["o", "l", "l", "e", "h"]

Example 2:
Input:  s = ["H", "a", "n", "n", "a", "h"]
Output:    ["h", "a", "n", "n", "a", "H"]
*/

#include <bits/stdc++.h>
using namespace std;

void reverseString(string &str) {
  int s=0;int e=str.size()-1;
  while(s<=e){
    swap(str[s],str[e]);
    s++;e--;
  }
  for(char ch:str){
    cout<<ch<<" ";
  }
}

int main() {
  string str="hello";
 reverseString(str);
}
