#include <iostream>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


 /*
    Input:  Array = [0, 2, 1, 2, 0, 1]
    Output: [0, 0, 1, 1, 2, 2]
    */

 void Sort_an_array_of_0s_1s_and_2s(vector<int>&num){
    int left=0;
    int right=num.size()-1;
    int mid=0;

    while(mid<=right){
      
       if(num[mid]==0){
        swap(num[left],num[mid]);
        left++;mid++;
       }else if(num[mid]==1){
         mid++;
       }else if(num[mid]==2){
        swap(num[mid],num[right]);
        right--;
       }
    }
 }


int main() {
   

    vector<int>num={0, 2, 1, 2, 0, 1};
    Sort_an_array_of_0s_1s_and_2s(num);
    for(int i:num){
      cout<<i<<" ";
    }


    return 0;
}
