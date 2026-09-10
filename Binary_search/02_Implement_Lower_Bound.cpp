// Question: Implement the lower bound of X in a sorted array.
//
// Input:
// Array: 1 2 4 4 5 7
// X: 4
//
// Output:
// Lower bound of X is at index 2.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int Implement_Lower_Bound(vector<int>nums,int target){
    int n=nums.size();
    int s=0;
    int e=n-1;
    int index=-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(nums[mid]>=target){
        index=mid;
        e=mid-1;
        }else if(nums[mid]<target){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return index;
}



int main() {
vector<int>nums={3,5,8,15,19};
int target=9;
int result=Implement_Lower_Bound(nums,target);
cout<<"Index is :- "<<result;
    
    return 0;
}
