#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Given an image represented by a matrix, rotate the image by 90 degrees clockwise.
//
// Input:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
//
// Output:
// 7 4 1
// 8 5 2
// 9 6 3



void transpose_matrix(vector<vector<int>>&matrix,int r,int c){
  for (int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(j>i){
        swap(matrix[i][j],matrix[j][i]);
      }
    }
  }
}

void Rotate_Image_by_90_degree(vector<vector<int>>&matrix){

   int r=matrix.size();
  int c=matrix[0].size();
  transpose_matrix(matrix,r,c);

 for(int i=0;i<r;i++){
   int s=0;
   int e=matrix[0].size()-1;
 while(s<e){
  swap(matrix[i][s],matrix[i][e]);
  s++,e--;
 }
   
 }

}


int main(){
vector<vector<int>>matrix={
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
Rotate_Image_by_90_degree(matrix);
for(auto i:matrix){
  for(int j:i){
    cout<<j<<" ";
  }
  cout<<endl;
}


return 0;
}
