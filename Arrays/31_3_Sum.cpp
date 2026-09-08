#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Find all unique triplets in an array whose sum is equal to zero.
//
// Input:
// 6
// -1 0 1 2 -1 -4
//
// Output:
// [-1, -1, 2]
// [-1, 0, 1]


vector<vector<int>>Arrays_3_Sum(vector<int>num,int target){
sort(num.begin(), num.end());
vector<vector<int>>result;
int n=num.size();
for(int i=0;i<n;i++){
if(i!=0 && num[i-1]==num[i])continue;

int j=i+1;
int k=n-1;
while (j<k){
   int sum=num[i]+num[j]+num[k];
   if(sum==target){
    vector<int>ans={num[i],num[j],num[k]};
        j++,k--;
        result.push_back(ans);
   }
   else if(sum<target){
    j++;
   }else{
    k--;
   }
}

}

 return result;
}





int main()
{
vector<int>number={-1,0,1,2,-1,-4};
int target=0;
vector<vector<int>>result=Arrays_3_Sum(number,target);
for( auto i:result){
  for(auto j:i){
    cout<<j<<" ";
  }
  cout<<endl;
}

    return 0;
}
