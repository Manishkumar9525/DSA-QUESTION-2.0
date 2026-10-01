#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 // Question: Given an array of integers and a target value, find two numbers
    // whose sum is equal to the target.
    //
    // Input:
    // Array: 2 7 11 15
    // Target: 9
    //
    // Output:
    // Indices: 0 1


vector<int>Two_sum(vector<int>num,int target){

   unordered_map<int,int>mpp;

   for(int i=0;i<num.size();i++){
     int key=num[i];
     int needed=target-key;
     if(mpp.find(needed)!=mpp.end()){
        return {mpp[needed],i};
     }
     mpp[key]=i;
   }
   return {};
}


int main() {
   vector<int>num={3,2,4};
   int target=6;
   vector<int>result=Two_sum(num,target);
   for(int x:result){
     cout<<x<<" ";
   }
}
