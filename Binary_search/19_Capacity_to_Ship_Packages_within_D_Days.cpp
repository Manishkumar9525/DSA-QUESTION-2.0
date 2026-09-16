#include <iostream>
#include<bits/stdc++.h>
using namespace std;


// Question: Find the least weight capacity of a ship that can ship all the
    // packages within d days.
    //
    // Input:
    // weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, days = 5
    //
    // Output:
    // 15
int DayNeed(vector<int>nums,int capacity){
    int day=1;
    int capa=0;
    for(int i=0;i<nums.size();i++){
        if(capa+nums[i]<=capacity){
            capa+=nums[i];
        }else{
            day++;
            capa=nums[i];
        }
    }
   return day;
}

int Capacity_to_Ship_Packages_within_D_Days(vector<int>nums,int days){
    int low=*max_element(nums.begin(),nums.end());
    int high=accumulate(nums.begin(),nums.end(),0);
    while (low<=high){
        
   int mid=low+(high-low)/2;
   int DaysNeeded=DayNeed(nums,mid);
   if(DaysNeeded<=days){
    high=mid-1;
   }else{
    low=mid+1;
   }
    }
    return low;
}


int main() {
    vector<int>nums{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days=5;
    int ans=Capacity_to_Ship_Packages_within_D_Days(nums,days);
    cout<<ans;

    return 0;
}
