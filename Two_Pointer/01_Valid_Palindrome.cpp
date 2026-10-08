/*
Question: Valid Palindrome

Given a string, determine whether it is a palindrome after converting all
uppercase letters to lowercase and removing all non-alphanumeric characters.

Return true if the cleaned string reads the same forward and backward;
otherwise, return false.

Example 1:
Input:  "A man, a plan, a canal: Panama"
Output: true
Explanation: After removing non-alphanumeric characters and converting to
lowercase, the string becomes "amanaplanacanalpanama", which is a palindrome.

Example 2:
Input:  "race a car"
Output: false
Explanation: After cleaning, the string becomes "raceacar", which is not a
palindrome.

Example 3:
Input:  " "
Output: true
Explanation: The cleaned string is empty, and an empty string is a palindrome.
*/

#include<bits/stdc++.h>
using namespace std;

bool Valid_Palindrome(string s){
   string str="";
   for(char c:s){
    if(c>='a' && c<='z' || c>='A' && c<='Z'){
      str+=tolower(c);
    }
   }

   int st=0;int e=str.size()-1;
   while(st<e){
     if(str[st]!=str[e]){
      return false;
     }
     st++;e--;
   }
   return true;
}

int main(){

  string s=  "race a car";
  bool result=Valid_Palindrome(s);
  if(result){
    cout<<"true";
  }else{
    cout<<"false";
  }

}
