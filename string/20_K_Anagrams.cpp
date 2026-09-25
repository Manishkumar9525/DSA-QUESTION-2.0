#include <iostream>
using namespace std;

// Question: Check if two strings are k-anagrams or not
// Input: s1 = "anagram", s2 = "grammar", k = 2
// Output: Yes

bool K_Anagrams(string s1,string s2 ,int k ){
  int frequency[26]={0};
  if(s1.length()!=s2.length()){
    return false;
  }

   for(char ch:s1){
     frequency[ch-'a']++;
   }

    for(char ch:s2){
     frequency[ch-'a']--;
   }

    int change=0;
    for(int x:frequency){
       if(x>0){
        change+=x;
       }
    }

    return change<=k;

}


int main() {
   string s1 = "anagram";
    string s2 = "grammar";
    int k = 2;

    if(K_Anagrams(s1, s2, k))
        cout << "True";
    else
        cout << "False";

    return 0;
    
}
