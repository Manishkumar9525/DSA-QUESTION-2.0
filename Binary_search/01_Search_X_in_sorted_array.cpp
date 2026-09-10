// Question: Search X in a sorted array.
//
// Input:
// Array: 1 3 5 7 9
// X: 5
//
// Output:
// X is present in the sorted array.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;



bool Search_X_in_sorted_array(vector<int>nums,int target){
  int s=0;int e=nums.size()-1;
  while(s<=e){
    int mid=s+(e-s)/2;
    if(nums[mid]==target){
      return true;
    }else if(nums[mid]<target){
      s=mid+1;
    }else{
      e=mid-1;
    }
  }
  return false;
}

int main() {

vector<int>nums={1,3,4,7,9,20};
int target=5;
bool result=Search_X_in_sorted_array(nums,target);
if(result){
  cout<<"target is in the array";
}else{
  cout<<"false  target is not in the array";
}

    return 0;
}
