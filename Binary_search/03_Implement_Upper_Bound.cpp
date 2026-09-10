// Question: Implement the upper bound of X in a sorted array.
//
// Input:
// Array: 1 2 4 4 5 7
// X: 4
//
// Output:
// Upper bound of X is at index 4.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int Implement_Upper_Bound(vector<int>nums,int target){
int n=nums.size();
int s=0;int e=n-1;
int index=-1;
while(s<=e){
  int mid=s+(e-s)/2;
  if(nums[mid]>target){
    index=mid;
    e=mid-1;
  }else {
    s=mid+1;
  }
}
return index;
}




int main() {
vector<int>nums={1,2,2,3};
int target=2;
int result=Implement_Upper_Bound(nums,target);
cout<<"index is :- "<<result;
    return 0;
}
