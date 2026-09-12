// Question: Find the minimum element in a rotated sorted array.
//
// Input:
// Array: 4 5 6 7 0 1 2
//
// Output:
// Minimum element: 0

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int Minimum_in_Rotated_Sorted_Array(vector<int>nums){
  int n=nums.size();
  int s=0;int e=n-1;
  while(s<e){
    int mid=s+(e-s)/2;
    if(nums[mid]>nums[e]){
      s=mid+1;
    }else{
      e=mid;
    }
  }
  return nums[e];
}

int main() {
  vector<int>nums={4,5,6,7,0,1,2,3};
  int result=Minimum_in_Rotated_Sorted_Array(nums);
  cout<<"mini-: "<<result;
    return 0;
}
