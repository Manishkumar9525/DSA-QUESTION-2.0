// Question: Given two strings s and goal, determine if s can become goal after some rotations.
//
// Example Input:
// s = "abcde"
// goal = "cdeab"
//
// Example Output:
// true

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool Rotate_string(string s,string goal){
  if(s.length()!=goal.length())return false;
  if((s+s).find(goal)!=string::npos){
    return true;
  }else{
    return false;
  }
}

int main() {
  string  s = "abcde" , goal = "cdeab";
  bool result=Rotate_string(s,goal);
  if(result){
    cout<<true;
  }else{
    cout<<"false";
  }
    return 0;
}
