#include <iostream>
using namespace std;

// Question: Find the minimum number of repetitions needed for one string
// to contain another string as a substring.
//
// Input:
// String A = "abcd"
// String B = "cdabcdab"
//
// Output:
// 3


int Min_Repeats_for_Substring_Match(string s1,string s2){
  string repeate="";
  int cnt=0;
  while(repeate.size()<s2.size()){
    repeate+=s1;
    cnt++;
  }

 if(repeate.find(s2)!=string::npos){
  return cnt;
 }

 repeate+=s1;
 cnt++;
  if(repeate.find(s2)!=string::npos){
  return cnt;
 }
return -1;
}

int main()
{

  string s1="abcd";
  string s2="cdabcdab";
  cout<<Min_Repeats_for_Substring_Match(s1, s2);
    return 0;
}
