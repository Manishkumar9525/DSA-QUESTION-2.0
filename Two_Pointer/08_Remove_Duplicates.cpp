/*
Question: Remove Duplicates from Sorted Array

Given an integer array nums sorted in non-decreasing order, remove the
duplicates in-place such that each unique element appears only once.

Return the number of unique elements in nums. The first k elements of nums
must contain the unique elements in their original order.

Example:
Input:  nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
Output: 5
nums = [0, 1, 2, 3, 4, _, _, _, _, _]
*/

#include<bits/stdc++.h>
using namespace std;


vector<int>Remove_Duplicates(vector<int>nums){
   set<int>st;
   for(int x:nums){
    st.insert(x);
  }
   vector<int>ans;
   for(auto x:st){
     ans.push_back(x);
   }
   return ans;
}



int main(){
  vector<int>nums={0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
   vector<int>ans= Remove_Duplicates(nums);
   for(auto x:ans){
    cout<<x<<" ";
   }
  }