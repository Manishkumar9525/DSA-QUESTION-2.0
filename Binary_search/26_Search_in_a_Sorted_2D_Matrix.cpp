#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Search for a target element in a sorted 2D matrix.
//
// Input:
// 3 4
// 1  3  5  7
// 10 11 16 20
// 23 30 34 60
// Target = 3
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
  vector<vector<int>>nums={{1,2,5,7},{10,11,16,20},{23,30,34,60}};
  int target=60;
 bool result=Search_in_a_Sorted_2D_Matrix(nums,target);
   if(result){
    cout<<"true";
   }else{
    cout<<"false";
   }
    return 0;
}
