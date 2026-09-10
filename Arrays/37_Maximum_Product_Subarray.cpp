#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Find the contiguous subarray with the largest product.
//
// Input:
// 2 3 -2 4
//
// Output:
// 6
int Maximum_Product_Subarray(vector<int>nums){
  int maximum=INT16_MIN;
  int n=nums.size();
  int prefix=1;
  int suffix=1;
  for(int i=0;i<n;i++){
    if(prefix<=0){
      prefix=1;
    }
    if(suffix<=0){
      suffix=1;
    }
    prefix=prefix*nums[i];
    suffix=suffix*nums[n-i-1];
    maximum=max(maximum,max(prefix,suffix));
  }
  return maximum;
}

int main(){
  vector<int>nums={-2,0,-1};
  int result=Maximum_Product_Subarray(nums);
  cout<<"Maximum product subarray :- "<<result;
  
}
