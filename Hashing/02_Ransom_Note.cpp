#include <iostream>
using namespace std;

// Question: Check whether a ransom note can be constructed from the letters in a magazine.
// Input: ransomNote = "a", magazine = "b"
// Output: false


bool Ransom_Note(string ransomNote,string margazine){
   int freq[26]={0};
   for(char x:margazine){
    freq[x-'a']++;
   }

   for(char x:ransomNote){
     if(freq[x-'a']==0){
      return false;
     }else{
      freq[x-'a']--;
     }
   }
   return true;
}


int main()
{
  string ransomNote = "cat";
  string magazine = "aabbcct";
   bool Hashing=Ransom_Note( ransomNote,magazine);
   if(Hashing){
    cout<<"true";
   }else{
    cout<<"false";
   }
    return 0;
}
