#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Sentence Palindrome
// Input: A man a plan a canal Panama
// Output: Palindrome





bool Sentence_Palindrome(string s){
  vector<char>st;
  for(int i=0;i<s.size();i++){
     if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
      st.push_back(tolower(s[i]));
     }
  }

  int start=0;
  int e=st.size()-1;

  while(start<=e){
    if(st[start]!=st[e]){
      return false;
    }
    start++;e--;
  }
  
 return true;
}

bool Sentence_palindrome(string str){
  int s=0;int e=str.size()-1;
  while(s<=e){
     if(!isalnum(str[s])){
      s++;continue;
     }

     if(!isalnum(str[e])){
      e--;
      continue;
     }

     if(tolower(str[s])!=tolower(str[e])){
      return false;
     }
     s++;e--;
  }
  return true;
}




int main() {

  string s="ABC $. def01ASDF..";
  bool result=Sentence_Palindrome(s);
  if(result){
    cout<<"palindrome";
  }else{
    cout<<"not palindrome";
  }

    return 0;
}
