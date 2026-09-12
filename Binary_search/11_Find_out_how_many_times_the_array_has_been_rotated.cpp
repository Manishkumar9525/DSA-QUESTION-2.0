// Question: Find out how many times the array has been rotated.
//
// Input:
// Array: 4 5 6 7 0 1 2 3
//
// Output:
// The array has been rotated 4 times.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int Find_out_how_many_times_the_array_has_been_rotated(vector<int>nums){
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
return e;
}


int main() {
  vector<int>nums={4,5,6,7,0,1,2,3};
  int result=Find_out_how_many_times_the_array_has_been_rotated(nums);
  cout<<result;
    return 0;
}
