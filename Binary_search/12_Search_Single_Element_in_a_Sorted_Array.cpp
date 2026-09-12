// Question: Search for a single element in a sorted array.
//
// Input:
// Array: 1 2 3 4 5 6 7
// Element: 5
//
// Output:
// Element 5 is present at index 4.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int Search_Single_Element_in_a_Sorted_Array(vector<int>nums){
  int n=nums.size();
  if(nums[0]!=nums[1])return nums[0];
  if(nums[n-1]!=nums[n-2])return nums[n-1];
  int s=1;
  int e=n-2;
  while(s<=e){
    int mid=s+(e-s)/2;
    if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
      return nums[mid];
    }

    if(mid%2==0 && nums[mid]==nums[mid+1] || mid%2==1 && nums[mid]==nums[mid-1]){
      s=mid+1;
    }else{
      e=mid-1;
    }
  }
  return -1;
}

int main() {
  vector<int>nums={1,1,2,2,3,3,4,5,5,6,6};
  int result=Search_Single_Element_in_a_Sorted_Array(nums);
  cout<<result;
    return 0;
}
