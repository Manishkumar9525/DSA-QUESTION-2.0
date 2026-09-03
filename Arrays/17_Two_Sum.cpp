#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

/*
Question:
Given an array of integers and a target value, find the indices of the two
numbers that add up to the target.

Example:
Input:  Array = [2, 6, 5, 8, 11], Target = 14
Output: [1, 3]

Example:
Input:  Array = [2, 6, 5, 8, 11], Target = 15
Output: [2, 3]
*/

vector<int> two_sum(const vector<int>& num, int target) {
    // TODO: Implement the Two Sum solution.
 unordered_map<int,int>mpp;
 for(int i=0;i<num.size();i++){
  int elemnt=num[i];
  int require=target-elemnt;
  
  if(mpp.find(require)!=mpp.end()){
    return{i,mpp[require]};
  }else{
    mpp[elemnt]=i;
  }
  

 }



}

int main() {
    vector<int> ans = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int>anss=two_sum(ans,target);
     for(auto i:anss){
      cout<<i<<" ";
     }
    // Complete the function before using its result here.
    return 0;
}
