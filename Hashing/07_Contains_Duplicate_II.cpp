#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Given an integer array nums and an integer k, determine whether there are two distinct indices i and j such that nums[i] == nums[j] and abs(i - j) <= k.
// Input: nums = [1, 2, 3, 1], k = 3
// Output: true

bool Contains_Duplicate_II(vector<int>num,int k){
  unordered_map<int,int>mpp;
  for(int i=0;i<num.size();i++){
    int key=num[i];
    if(mpp.find(key)!=mpp.end()){
      if(i-mpp[key]<=k){
        return true;
      }
    }else{
      mpp[key]=i;
    }
  }
  return false;
}

int main() {
    vector<int>num={1, 2, 3, 1};
    int k=3;
    int result=Contains_Duplicate_II(num,k);
    if(result){
      cout<<"true";
    }else{
      cout<<"false";
    }
    return 0;
}
