#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 // Question: Find the smallest divisor such that the sum of the rounded-up
    // division results is less than or equal to the given threshold.
    //
    // Input:
    // nums = {1, 2, 5, 9}, threshold = 6
    //
    // Output:
    // 5




int sumofDiv(vector<int>ans,int mid){
  int sum=0;
  for(int i=0;i<ans.size();i++){
    sum+=ceil((double)(ans[i])/(double)(mid));
  }
  return sum;
}


int Find_the_Smallest_Divisor_Given_a_Threshold(vector<int>nums,int limit){
  int s=1;int e=*max_element(nums.begin(),nums.end());int ans=-1;
  while(s<e){
    int mid=s+(e-s)/2;
    if(sumofDiv(nums,mid)<=limit){
         ans=mid;
         e=mid-1;
    }else{
      s=mid+1;
    }
  }
  return ans;
}



int main() {
   
vector<int>nums={1, 2, 5, 9};
int limit=6;
int result=Find_the_Smallest_Divisor_Given_a_Threshold(nums,limit);
cout<<result;
    return 0;
}
