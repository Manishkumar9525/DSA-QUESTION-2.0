#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Merge two sorted arrays without using extra space.
//
// Input : nums1 = [-5, -2, 4, 5, 0, 0, 0], nums2 = [-3, 1, 8]
// Output : [-5, -3, -2, 1, 4, 5, 8]
// Explanation : The merged array is: [-5, -3, -2, 1, 4, 5, 8], where [-5, -2, 4, 5] are from nums1 and [-3, 1, 8] are from nums2

void Merge_two_Sorted_Arrays_Without_Extra_Space(vector<int>&num1,int &m,vector<int>&num2,int &n){

int k=m+n-1;
int i=m-1;
int j=n-1;
while(j>=0){
  if(i>=0 && num1[i]>num2[j]){
    num1[k--]=num1[i--];
  }else{
    num1[k--]=num2[j--];
  }
}
while(i>=0){
   num1[k--]=num1[i--];
}

}

int main()
{
  vector<int>num1={-5, -2, 4, 5, 0, 0, 0};
  vector<int>num2={-3, 1, 8};
  int m=4;
  int n=3;
  Merge_two_Sorted_Arrays_Without_Extra_Space(num1,m,num2,n);
  for(int i:num1){
    cout<<i<<" ";
  }

}
