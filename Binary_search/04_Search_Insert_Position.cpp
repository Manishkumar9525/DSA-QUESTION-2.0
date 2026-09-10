// Question: Find the search insert position of X in a sorted array.
//
// Input:
// Array: 1 3 5 6
// X: 2
//
// Output:
// Search insert position of X is index 1.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int Search_Insert_Position(vector<int>nums,int target){
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
vector<int>nums={1,2,4,7};
int target=6;
int index=Search_Insert_Position(nums,target);
cout<<index;
    return 0;
}
