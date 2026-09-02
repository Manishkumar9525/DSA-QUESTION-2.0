#include<iostream>
#include<vector>
#include<set>
#include <unordered_map>
#include <algorithm>
using namespace std;


// vector<int>Unique_of_two_array(vector<int>num1,vector<int>num2){
//   int n1=num1.size();
//   int n2=num2.size();
//   vector<int>ans;
//   set<int>s;
//   for(int i=0;i<n1;i++){
//     s.insert(num1[i]);
//   }
//   for(int i=0;i<n2;i++){
//     s.insert(num2[i]);
//   }
//   for(int i:s){
//     ans.push_back(i);
//   }
//   return ans;
// }

vector<int>Unique_of_two_array(vector<int>num1,vector<int>num2){
  int n1=num1.size();
  int n2=num2.size();
  vector<int>ans;
  
  unordered_map<int,int> mp;
  for(int i=0;i<n1;i++){
    mp[num1[i]]++;
  }
   for(int i=0;i<n2;i++){
    mp[num2[i]]++;
  }
  
  for(auto i:mp){ 
      ans.push_back(i.first);
  }
  return ans;
}

int main(){
// ======================== Union of Two Sorted Arrays

// vector<int>arr1={1,2,3,4,5}; vector<int>arr2={2,3,4,4,5};
 
// vector<int>ans=Unique_of_two_array(arr1,arr2);
//  for(int i:ans){
//   cout<<i<<" ";
//  }
}
