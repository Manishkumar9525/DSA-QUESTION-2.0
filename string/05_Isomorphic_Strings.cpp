// Question: Given two strings s and t, determine if they are isomorphic strings.
// Two strings are isomorphic if the characters in s can be replaced to get t.
//
// Example Input:
// egg
// add
//
// Example Output:
// true

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool Isomorphic_string(string s1,string s2){
 int map[256]={0};
 int map2[256]={0};
 if(s1.length()!=s2.length()){return false;}

 for(int i=0;i<s1.length();i++){
    char ch=s1[i];
    char ch2=s2[i];
    if(map[ch]!=map2[ch2]){
      return false;
    }
    map[ch]=i+1;
    map2[ch]=i+1;
 }
  return true;
}


int main() {

string s1="egg";
string s2="add";
bool result=Isomorphic_string(s1,s2);
if(result){
  cout<<"true";
}else{
  cout<< "false";
}

    return 0;
}
