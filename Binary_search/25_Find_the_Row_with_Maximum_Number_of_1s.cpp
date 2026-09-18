#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Find the row with the maximum number of 1's in a binary matrix.
//
// Input:
// 3 4
// 0 1 1 1
// 0 0 1 1
// 1 1 1 1
//
// Output:
// 2

int Find_the_Row_with_Maximum_Number_of_1s(vector<vector<int>>nums){
  int row=nums.size();
  int col=nums[0].size();
  int index=-1;
  int maxi=-1;
  
  for(int i=0;i<row;i++){
    int sum=0;
    for(int j=0;j<col;j++){
      sum+=nums[i][j];
    }
    if(sum>maxi){
      maxi=sum;
      index=i;
    }
  }
 return index;
}

int main()
{

vector<vector<int>>nums={{0,1,1,1},{0,0,1,1},{1,1,1,1}};
 int result=Find_the_Row_with_Maximum_Number_of_1s(nums);
cout<<"the row of maximum number of 1S is :- "<<result;

    return 0;
}
