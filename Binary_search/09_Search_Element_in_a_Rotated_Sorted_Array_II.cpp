// Question: Search an element X in a rotated sorted array II.
//
// Input:
// Array: 2 5 6 0 0 1 2
// X: 0
//
// Output:
// Element X is present in the array.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool Search_Element_in_a_Rotated_Sorted_Array_II(vector<int>&nums,int target){

int n=nums.size();
int s=0;int e=n-1;
while(s<=e){
  int mid=s+(e-s)/2;
  if(nums[mid]==target)return true;
  if(nums[mid]==nums[s] && nums[mid]==nums[e]){
    s++;e--;
    continue;
  }
  if(nums[s]<nums[mid]){
    if(nums[s]<=target && target<nums[mid]){
      e=mid-1;
    }else{
      s=mid+1;
    }
  }else{
    if(nums[mid]<target && target<=nums[e]){
          s=mid+1;
    }else{
      e=mid-1;
    }
  }
}
return false;

}

int main() {

  vector<int>nums={7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
  int target=10;
  bool result=Search_Element_in_a_Rotated_Sorted_Array_II(nums,target);
  if (result){
    cout<<"true";
  }else{
    cout<<"false";
  }
    return 0;
}
