#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

/*
Question:
Find the length of the longest subarray with a sum of zero.

Example:
Input:  Array = [9, -3, 3, -1, 6, -5]
Output: 5
*/

int longest_subarray_with_zero_sum(const vector<int>& num) {
  int n=num.size();
   unordered_map<int,int>mpp;
   int sum=0;
   int maxi=0;

   for(int i=0;i<n;i++){
      sum+=num[i];
      if(sum==0){
         maxi=i+1;
      }  
      else{
        if(mpp.find(sum)!=mpp.end()){
          maxi=max(maxi,i-mpp[sum]);
        }else{
          mpp[sum]=i;
        }
      }
   }
 return maxi;
}

int main() {
    vector<int> ans = {9, -3, 3, -1, 6, -5};
    int answer = longest_subarray_with_zero_sum(ans);

    cout << answer;

    return 0;
}
