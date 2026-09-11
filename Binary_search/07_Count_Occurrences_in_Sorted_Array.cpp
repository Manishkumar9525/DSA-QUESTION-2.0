// Question: Count the occurrences of X in a sorted array.
//
// Input:
// Array: 1 2 2 2 4 5
// X: 2
//
// Output:
// Count of X is 3.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int Last_Occurrence_in_a_Sorted_Array(vector<int>nums,int target){
  int n=nums.size();
  int s=0;int e=n-1;
  int index=-1;
  while(s<=e){
    int mid=s+(e-s)/2;
    if(nums[mid]<=target){
       index=mid;
       s=mid+1;
    }else{
      e=mid-1;
    }
  }
  return index;
}


int first_Occurrence_in_a_Sorted_Array(vector<int>nums,int target){
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

  vector<int>nums={1, 2, 2, 2, 4, 5};
  int target=2;
  int result=Last_Occurrence_in_a_Sorted_Array(nums,target);
  int result2=first_Occurrence_in_a_Sorted_Array(nums,target);
  cout<<"Count = "<<result-result2+1;
    return 0;

// Time: O(log N)
// Space: O(1)
}












// #include <iostream>
// #include <vector>
// #include <map>
// using namespace std;

// int countOccurrences(vector<int> arr, int X) {

//     map<int, int> mp;

//     for(auto x : arr) {
//         mp[x]++;
//     }

//     return mp[X];
// }

// int main() {

//     vector<int> arr = {2, 2, 3, 3, 3, 3, 4};
//     int X = 3;

//     int result = countOccurrences(arr, X);

//     cout << "Count = " << result;

//     return 0;
// }          Map approach: O(N log N) time, O(N) space.