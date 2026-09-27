#include <bits/stdc++.h>
using namespace std;

// Question: Given a list of words, print all anagrams together.
//
// Input:
// Words = {"act", "god", "cat", "dog", "tac"}
//
// Output:
// act cat tac
// god dog

vector<vector<string>>Group_Anagrams(vector<string>str){
 
  unordered_map<string,vector<string>>mp;
  for(string word:str){
      string key=word;
      sort(key.begin(),key.end());
      mp[key].push_back(word);
  }
  
  vector<vector<string>>result;
  for(auto x:mp){
     result.push_back(x.second);
  }

return result;

}

int main(){
vector<string>str={"eat", "tea", "tan", "ate", "nat", "bat"};

vector<vector<string>>result=Group_Anagrams(str);

for(auto group:result){
   for(auto word:group){
    cout<<word<<" ";
   }
   cout<<endl;
}

}