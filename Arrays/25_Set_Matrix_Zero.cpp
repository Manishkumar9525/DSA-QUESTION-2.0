#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Given a matrix, set every row and column to zero if an element is zero.
//
// Input:
// 3 3
// 1 1 1
// 1 0 1
// 1 1 1
//
// Output:
// 1 0 1
// 0 0 0
// 1 0 1



void transpose_matrix(vector<vector<int>>&matrix,int r,int c){
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(j>i){
        swap(matrix[i][j],matrix[j][i]);
      }
    }
  }
}



void set_matrix_zero(vector<vector<int>>&matrix){
  int r=matrix.size();
  int c=matrix[0].size();
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(matrix[i][j]==0){
        for(int k=0;k<r;k++){
          if(matrix[k][j]!=0){
            matrix[k][j]=99;
          }
        }
      }
    }
  }

  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(matrix[i][j]==0){
        for(int k=0;k<c;k++){
          if(matrix[i][k]!=0){
            matrix[i][k]=99;
          }
        }
      }
    }
  }

   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(matrix[i][j]==99){
        matrix[i][j]=0;
      }
    }
  }


}







int main(){

vector<vector<int>>matrix={
    {0, 1, 2, 0},
    {3, 4, 5, 2},
    {1, 3, 1, 5}
};
set_matrix_zero(matrix);
for(auto i:matrix){
  for(auto j:i){
    cout<<j<<" ";
  }
  cout<<endl;
}


 return 0;
}
