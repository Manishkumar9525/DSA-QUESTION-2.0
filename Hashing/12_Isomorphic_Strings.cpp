#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// Question: Given two strings, determine whether they are isomorphic.
    //
    // Input:
    // String 1: egg
    // String 2: add
    //
    // Output:
    // True

 bool Isomorphic_Strings(string s1,string s2){
  int map[256]={0};
  int map2[256]={0};

  if(s1.size()!=s2.size())return false;

  for(int i=0;i<s1.size();i++){
    int ch=s1[i];
    int ch2=s2[i];
    if(map[ch]!=map2[ch2]){
      return false;
    }
    map[ch]=i+1;
    map2[ch2]=i+1;
  }
   return true;
 }


int main() {
    string s1="egg";
    string s2="add";

    bool result=Isomorphic_Strings(s1,s2);
    if(result){
      cout<<"true";
    }else{
      cout<<"false";
    }
}
