#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Merge all overlapping sub-intervals.
//
// Input:
// 4
// 1 3
// 2 6
// 8 10
// 9 11
//
// Output:
// [1, 6]
// [8, 11]

vector<vector<int>>Merge_Overlapping_Sub_intervals(vector<vector<int>>num){

int n=num.size();
vector<vector<int>>result;
for(int i=0;i<n;i++){
  if(result.empty() || result.back()[1]<num[i][0]){
       result.push_back(num[i]);
  }else{
     result.back()[1]=max(result.back()[1],num[i][1]);
  }
}
return result;

}



int main()
{

vector<vector<int>>num={{1,3},{2,6},{8,10},{9,11}};
vector<vector<int>>result=Merge_Overlapping_Sub_intervals(num);
for(auto i:result){
  cout<<"[";
  for(auto j:i){
    cout<<j<<",";
  }
  cout<<"]"<<endl;
}


}
