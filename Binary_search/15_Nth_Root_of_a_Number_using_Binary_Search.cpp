#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Find the Nth root of a number using Binary Search.
  // Input: N = 3, Number = 27
  // Output: 3


int Nth_Root_of_a_Number_using_Binary_Search(int m, int n){
  int s=1;int e=m;
   while(s<=e){
    int mid=s+(e-s)/2;
    int ans=1;
     for(int i=1;i<=n;i++){
         ans*=mid;
         if(ans>m)break;
     }
     if(ans==m){
      return mid;
     }else if(ans<m){
      s=mid+1;
     }else{
      e=mid-1;
     }
   }
   return -1;
}


int main() {

   int m=27;int n=3;
   int result=Nth_Root_of_a_Number_using_Binary_Search(m,n);
   cout<<result;
    return 0;
}
