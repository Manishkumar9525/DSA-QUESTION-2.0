#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
Question: Kadane's Algorithm: Find the Maximum Subarray Sum in an Array.

Input:
Array = [-2, 1, -3, 4, -1, 2, 1, -5, 4]

Output:
6
*/


int Kadanes_Algorithm_Maximum_Subarray_Sum(vector<int>num){
   int currsum=0;
   int maxi=INT16_MIN;

   for(int i=0;i<num.size();i++){
     currsum+=num[i];
     if(currsum>maxi){
      maxi=currsum;
     }
   
     if(currsum<0){
      currsum=0;
     }

   }
   return maxi;
}


int main() {

  vector<int>num={-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int answer=Kadanes_Algorithm_Maximum_Subarray_Sum(num);
  cout<<answer;
    return 0;
  
}
