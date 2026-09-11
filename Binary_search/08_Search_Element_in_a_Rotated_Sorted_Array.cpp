// Question: Search an element X in a rotated sorted array.
//
// Input:
// Array: 4 5 6 7 0 1 2
// X: 0
//
// Output:
// Element X is present at index 4.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int Search_Element_in_a_Rotated_Sorted_Array(vector<int>nums,int k){
  int s=0;int e=nums.size()-1;
  while(s<=e){
    int mid=s+(e-s)/2;

   if(nums[mid]==k){
    return mid;
   }

   if(nums[s]<=nums[mid]){
      if(nums[s]<=k && k<nums[mid]){
       e=mid-1;
      }else{
        s=mid+1;
      }
   }else{
    if(nums[mid]<k && k<=nums[e]){
      s=mid+1;
    }else{
      e=mid-1;
    }
   }

  }
  return -1;
}



int main() {
  vector<int>nums={4, 5, 6, 7, 0, 1, 2};
  int k=0;
  int result=Search_Element_in_a_Rotated_Sorted_Array(nums,k);
  cout<<result;

    return 0;
}