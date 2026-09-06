#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Given a matrix, print all its elements in spiral order.
//
// Input:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
//
// Output:
// 1 2 3 6 9 8 7 4 5


vector<int>Spiral_Traversal_of_Matrix(vector<vector<int>>&matrix){
  vector<int>ans;
int r=matrix.size();
int c=matrix[0].size();
int count=0;int total=r*c;
int startingrow=0;
int endingrow=r-1;
int startingcol=0;
int endingcol=c-1;

while(count<total){

  for(int i=startingcol; count<total && i<=endingcol ;i++){
    ans.push_back(matrix[startingrow][i]);
    count++;
  }
  startingrow++;

  for(int i=startingrow; count<total && i<=endingrow ;i++){
   ans.push_back(matrix[i][endingcol]);
   count++;
  }
  endingcol--;

  for(int i=endingcol;count<total && i>=startingcol ;i--){
    ans.push_back(matrix[endingrow][i]);
    count++;
  }
  endingrow--;

 for(int i=endingrow;count<total && i>=startingrow ;i--){
    ans.push_back(matrix[i][startingcol]);
    count++;
  }
  startingcol++;


}
return ans;

}



int main()
{

  vector<vector<int>>matrix={ { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } };
  vector<int>ans=Spiral_Traversal_of_Matrix(matrix);
  for(auto i:ans){
    cout<<i<<" ";
  }
    return 0;
}
