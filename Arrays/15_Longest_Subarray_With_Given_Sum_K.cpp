#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

/*
Question:
Find the longest subarray with a given sum K.

Example:
Input:  Array = [1, 2, 3, 4, 5], K = 9
Output: 3
*/

int longest_subarray_with_a_given_sum_K(vector<int>num,int k){
    int n=num.size();
    int left=0;
    int right=0;
    int sum=num[0];
    int maxlength=0;

 while(right<n){
   while(left<=right && sum>k){
         sum -=num[left];
         left++;
   }

   if(sum==k){
    maxlength=max(maxlength,right-left+1);
   }


   right++;
  if(right<n)sum+=num[right];
  
 }
return maxlength;

}


int main() {

vector<int>ans={10, 5, 2, 7, 1, 9};
int k=15;
 int answer=longest_subarray_with_a_given_sum_K(ans,k);
 cout<<(answer);


    return 0;
}
