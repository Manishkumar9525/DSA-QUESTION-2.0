// Question: Find the last occurrence of X in a sorted array.
//
// Input:
// Array: 1 2 2 2 4 5
// X: 2
//
// Output:
// Last occurrence of X is at index 3.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int Last_Occurrence_in_a_Sorted_Array(vector<int>nums,int target){
  int n=nums.size();
  int s=0;int e=n-1;
  int index=-1;
  while(s<=e){
    int mid=s+(e-s)/2;
    if(nums[mid]<=target){
       index=mid;
       s=mid+1;
    }else{
      e=mid-1;
    }
  }
  return index;
}


int first_Occurrence_in_a_Sorted_Array(vector<int>nums,int target){
  int n=nums.size();
  int s=0;int e=n-1;
  int index=-1;
  while(s<=e){
    int mid=s+(e-s)/2;
    if(nums[mid]>=target){
       index=mid;
       e=mid-1;
    }else{
      s=mid+1;
    }
  }
  return index;
}






int main() {

  vector<int>nums={3, 4, 13, 13, 13, 20, 40};
  int target=13;
  int result=Last_Occurrence_in_a_Sorted_Array(nums,target);
  cout<<"last occurrence :- "<<result;
  int result2=first_Occurrence_in_a_Sorted_Array(nums,target);
  cout<<"first occurence :- "<<result2;
    return 0;
}