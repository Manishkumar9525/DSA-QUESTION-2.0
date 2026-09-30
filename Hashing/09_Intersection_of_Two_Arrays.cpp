#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Find the unique elements present in both arrays.
// Input: nums1 = [1, 2, 2, 1], nums2 = [2, 2]
// Output: [2]

vector<int>Intersection_of_Two_Arrays( vector<int> nums1,vector<int> nums2){
  unordered_set<int>ans={nums1.begin(),nums1.end()};
  unordered_set<int>intersection;

   for(int x:nums2){
     if(ans.find(x)!=ans.end()){
      intersection.insert(x);
     }
   }
  vector<int>result;
  for(int x:intersection){
      result.push_back(x);
  }
  return result;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> nums2 = {3, 4, 5, 6};
    vector<int> result = Intersection_of_Two_Arrays(nums1, nums2);

    for (int value : result) {
        cout << value << " ";
    }

    return 0;
}
