#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: 4SUM Find all unique quadruplets in an array whose sum is equal to a target value.
//
// Input:
// 6
// 1 0 -1 0 -2 2
// Target: 0
//
// Output:
// [-2, -1, 1, 2]
// [-2, 0, 0, 2]generate new file in this name Kadane's Algorithm : Maximum Subarray Sum in an Array and in file just simple create example (in this write question ) with input or output and simple #include<iostream> ,usingname space ,int main not more then that not create solution
// [-1, 0, 0, 1]



vector<vector<int>>array_4Sum(vector<int>num,int target){
  sort(num.begin(),num.end());
  vector<vector<int>>result;
  int n=num.size();
  for(int i=0;i<n;i++){
    if(i>0 && num[i-1]==num[i])continue;
  for(int j=i+1;j<n;j++){
    if(j>i+1 && num[j]==num[j-1])continue;

    int k=j+1;
    int l=n-1;

    while(k<l){
      int sum=num[i]+num[j]+num[k]+num[l];
      if(sum>target){
        l--;
      }else if(sum<target){
        k++;
      }else{
        vector<int>ans={num[i],num[j],num[k],num[l]}; k++;l--;
        result.push_back(ans);
        while(k<l && num[k]==num[k-1])k++;
        while(k<l && num[l]==num[l+1])l--;
      }
    }
  }
    

  }
  return result;
}



int main()
{
  
  vector<int>nums={4,3,3,4,4,2,1,2,1,1};
  int target=9;
  vector<vector<int>>result=array_4Sum(nums,target);
  for(auto i:result){
    for(auto j:i){
      cout<<j<<" ";
    }
    cout<<endl;
  }

  return 0;
}
