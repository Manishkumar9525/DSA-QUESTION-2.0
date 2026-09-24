#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Encrypt the String - II
// Input: aaaabbbcc
// Output: a4b3c2

string Encrypt_the_String_II(string str){

string ans="";
for(int i=0;i<str.length();i++){
  int cnt=1;
   while(i+1<str.length() && str[i]==str[i+1]){
       cnt++;
       i++;
   }
   ans+=str[i];
   ans+=to_string(cnt);
}
return ans;
}


int main() {
  string str="aaaabbbcc";
  string ans=Encrypt_the_String_II(str);
  cout<<ans;
    return 0;
}
