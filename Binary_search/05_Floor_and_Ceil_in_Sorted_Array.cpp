// Question: Find the floor and ceil of X in a sorted array.
//
// Input:
// Array: 1 2 4 7 9
// X: 5
//
// Output:
// Floor: 4
// Ceil: 7

#include <iostream>
#include<bits/stdc++.h>
using namespace std;


pair<int,int>Floor_and_Ceil_in_Sorted_Array(vector<int>nums,int target){

int n=nums.size();
int s=0;int e=n-1;
int floor=-1;
int ceil=-1;
while(s<=e){
  int mid=s+(e-s)/2;
  if(nums[mid]==target){
    floor=nums[mid];
    ceil=nums[mid];
    return{floor,ceil};
  }else if(nums[mid]>target){
     floor=nums[mid];
     e=mid-1;
  }else{
    ceil=nums[mid];
    s=mid+1;
  }
}
return {ceil,floor};

}




int main() {
vector<int>nums={1,2,4,7,9};
int target=5;
pair<int,int>result=Floor_and_Ceil_in_Sorted_Array(nums,target);
cout<<"floor :- "<<result.first<<"  "<<"ceil :- "<<result.second;
  

    return 0;
}