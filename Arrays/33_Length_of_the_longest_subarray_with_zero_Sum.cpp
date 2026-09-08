#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Find the length of the longest subarray with a sum of zero.
//
// Input:
// 6
// 9 -3 3 -1 6 -5
//
// Output:
// 5

int longest_subarray_with_zero_Sum(vector<int>num,int target){

unordered_map<int,int>mpp;
int n=num.size();
int sum=0;
int maxi=0;
for(int i=0;i<n;i++){
   sum+=num[i];
   if(sum==target){
    maxi=i+1;
   }else{
     if(mpp.find(sum)!=mpp.end()){
      maxi=max(maxi,i-mpp[sum]);
     }else{
      mpp[sum]=i;
     }
   }
}
return maxi;

}

int main()
{

vector<int>num={9, -3, 3, -1, 6, -5};
int sum=0;
int result=longest_subarray_with_zero_Sum(num,sum);
cout<<"longest subarray with Zero Sum :- "<<result;





    return 0;
}
