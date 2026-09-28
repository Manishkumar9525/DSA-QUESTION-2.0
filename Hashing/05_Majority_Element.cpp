#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

// Question: Find the element that appears more than n/2 times in an array.
// Input: nums = [2, 2, 1, 1, 1, 2, 2]
// Output: 2

int Majority_Element(vector<int> nums){
  int n=nums.size();
  int maxi=(int)(1/2)+1;
   unordered_map<int,int>mp;
    for(int x:nums){
      mp[x]++;
      if(mp[x]==maxi){
        return x;
      }
    }
   
   return -1;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int result = Majority_Element(nums);
    cout << result;
    return 0;
}
