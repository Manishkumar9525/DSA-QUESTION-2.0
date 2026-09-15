#include<bits/stdc++.h>
#include <iostream>
using namespace std;
// Question: Find the minimum number of days needed to make m bouquets.
    // Each bouquet requires k adjacent flowers, and each flower blooms on a given day.
    //
    // Input:
    // n = 5, m = 3, k = 1
    // bloomDay = {1, 10, 3, 10, 2}
    //
    // Output:
    // 3


    bool howManyDays(int mid,vector<int>nums,int m,int k){
      int flower=0;
      int bouquets=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]<=mid){
          flower++;
          if(flower==k){
            bouquets++;
            flower=0;
          }
        }else{
          flower=0;
        }
      }
      return bouquets>=m;
    }


 int Minimum_days_to_make_M_bouquets(vector<int>nums,int m,int k){
  int n= nums.size();
  int total=k*m;
 if(total>n)return -1;
 int s=*min_element(nums.begin(),nums.end());
 int e=*max_element(nums.begin(),nums.end());

 while(s<=e){
   int mid=s+(e-s)/2;
   if(howManyDays(mid,nums,m,k)){
     e=mid-1;
   }else{
    s=mid+1;
   }
  
 }
   return s;

}









int main() {
 vector<int>nums={7, 7, 7, 7, 13, 11, 12, 7};
 int m=2; int k=3;

 int result=Minimum_days_to_make_M_bouquets(nums,m,k);
 cout<<result;

    return 0;
}
