#include <iostream>
using namespace std;

// Question: Check whether two strings are valid anagrams of each other.
// Input: "anagram", "nagaram"
// Output: true

bool Valid_Anagram(string s1,string s2){
    int frequency[26]={0};
    for(char x:s1){
       frequency[x -'a']++;
    }
    for(char x:s2){
      frequency[x -'a']--;
    }

    for(int x:frequency){
       if(x!=0){
         return false;
       }
    }
    return true;
}


int main()
{
  string s1="anagram";string s2="nagaram";
  bool result= Valid_Anagram(s1,s2);
  if(result){
    cout<<"true";
  }else{
    cout<<"false";
  }
    return 0;
}
