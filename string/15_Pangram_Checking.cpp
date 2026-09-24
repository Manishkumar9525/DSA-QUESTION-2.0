#include <iostream>
using namespace std;

// Question: Pangram Checking
// Input: The quick brown fox jumps over the lazy dog
// Output: true

bool Pangram_Checking(string str){
int frequency[26]={0};
 for(int i=0;i<str.length();i++){
     if(str[i]==' '){
      continue;
     }
     frequency[str[i]-'a']++;
 }
  for(int x:frequency){
     if(x==0){
     return false;
     }
  }
   return true;

}


int main() {

  string str="The quick brown fox jumps over the lazy dog";
   bool ans=Pangram_Checking(str);
   if(ans){
    cout<<"true";
   }else{
    cout<<"false";
   }
    return 0;
}
