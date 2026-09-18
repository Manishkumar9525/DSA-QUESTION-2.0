#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Search for a target element in a row-wise and column-wise sorted matrix.
//
// Input:
// 4 4
// 10 20 30 40
// 15 25 35 45
// 27 29 37 48
// 32 33 39 50
// Target = 29
//
// Output:
// 1

bool Search_in_a_Sorted_2D_Matrix(vector<vector<int>>nums,int target){
   int row=nums.size();
   int col=nums[0].size();
   int col_index=col-1;
   int row_index=0;

   while(row_index<row && col_index>=0){
    if(nums[row_index][col_index]==target){
      return true;
    }else if(nums[row_index][col_index]<target){
      row_index++;
    }else{
      col_index--;
    }
   }
  return false;
}

int main()
{
  vector<vector<int>>nums={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
  int target=9;
 bool result=Search_in_a_Sorted_2D_Matrix(nums,target);
   if(result){
    cout<<"true";
   }else{
    cout<<"false";
   }
    return 0;
}
