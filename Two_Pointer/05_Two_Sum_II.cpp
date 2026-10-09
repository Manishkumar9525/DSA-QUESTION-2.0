/*
Question: Two Sum II - Input Array Is Sorted

Given a 1-indexed array of integers sorted in non-decreasing order, find
two numbers that add up to a target value.

Return the 1-based indices of the two numbers. The problem guarantees that
exactly one solution exists.

Example:
Input:  numbers = [2, 7, 11, 15], target = 9
Output: [1, 2]
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(const vector<int>& numbers, int target) {
  int s=0;int e=numbers.size()-1;
  while(s<e){
    int sum=numbers[s]+numbers[e];
    if(sum==target){
      return {s+1,e+1};
    }else if(sum<target){
      s++;
    }else{
      e--;
    }
  }

  return {};
}

int main() {
  vector<int> numbers = {2, 7, 11, 15};
  int target = 9;

  vector<int> result = twoSum(numbers, target);
  for (int index : result) {
    cout << index << " ";
  }

  return 0;
}
