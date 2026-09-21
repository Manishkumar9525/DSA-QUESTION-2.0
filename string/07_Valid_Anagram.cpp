// Question: Given two strings s and t, determine if t is an anagram of s.
// An anagram contains the same characters with the same frequencies.
//
// Example Input:
// s = "anagram"
// t = "nagaram"
//
// Example Output:
// true

#include <iostream>
using namespace std;
bool Valid_anagram(string s,string t){
  int frequency[26]={0};
  if(s.length()!=t.length())return false;
  for(char x:s){
     frequency[x -'a']++;
  }
  for(char x:t){
    frequency[x -'a']--;
  }
  for(int x:frequency){
    if(x!=0){
      return false;
    }
  }
  return true;
}
int main() {
  string s = "anagram" , t = "nagaram";
  bool result=Valid_anagram(s,t);
  if(result){
    cout<<"true";
  }else{
    cout<<"false";
  }
    return 0;
}
