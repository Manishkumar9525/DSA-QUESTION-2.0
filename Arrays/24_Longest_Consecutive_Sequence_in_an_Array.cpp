#include<bits/stdc++.h>
#include <iostream>
using namespace std;


 /*
    Question: Find the longest consecutive sequence in an array.

    Input:
    arr = [100, 4, 200, 1, 3, 2]

    Output:
    4
    */


int Longest_Consecutive_Sequence_in_an_Array(vector<int>&nums){
   unordered_set<int>st;
   int longest=INT16_MIN;
   for(int i:nums){
    st.insert(i);
   }

  for(auto i:st){
     if(st.find(i-1)==st.end()){
      int cnt=1;
      int x=i;
       while(st.find(x+1)!=st.end()){
         cnt+=1;
         x+=1;      
       }
        longest=max(longest,cnt);
     }
   
  }
  return longest; 

}


int main() {
   
  vector<int>nums={100, 4, 200, 1, 3, 2};
  int result=Longest_Consecutive_Sequence_in_an_Array(nums);
  cout<<"longest consecutive sequence in an array :- "<<result;

    return 0;
}
