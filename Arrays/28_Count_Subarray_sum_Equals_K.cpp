

//Count Subarray sum Equals K

/*Input : N = 4, array[] = {3, 1, 2, 4}, k = 6
Output: 2
Explanation: The subarrays that sum up to 6 are [3, 1, 2] and [2, 4].

Input: N = 3, array[] = {1,2,3}, k = 3
Output: 2
Explanation: The subarrays that sum up to 3 are [1, 2], and [3].*/

#include<bits/stdc++.h>
using namespace std;


int Count_Subarray_sum_Equals_K(vector<int>&array,int k){
int n=array.size();
int cnt=0;
for(int i=0;i<n;i++){
  int sum=0;
  for(int j=i;j<n;j++){
         sum+=array[j];
         if(sum==k){
          cnt++;
         }
  }
}
return cnt;
}


int main(){
  vector<int>array={3, 1, 2, 4};
  int k=6;
  int result=Count_Subarray_sum_Equals_K(array,k);
  cout<<result<<" ";
  return 0;
}