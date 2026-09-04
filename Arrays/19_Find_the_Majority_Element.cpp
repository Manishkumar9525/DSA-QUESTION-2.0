#include <iostream>
#include<vector>
#include<unordered_map>

using namespace std;

/*
Question: Find the Majority Element that occurs more than N/2 times.

Input:
Array = [2, 2, 1, 1, 1, 2, 2]

Output:
2
*/

int Find_the_Majority_Element(vector<int>num){
  int n=num.size();
  int maxi=(int)n/2;
  cout<<maxi;
  unordered_map<int,int>mpp;

  for(int i=0;i<n;i++){
    mpp[num[i]]++;
  }

  for(auto pair:mpp){
    if(pair.second>maxi){
      return pair.first;
    }
  }
 return -1;

}

int main() {
 vector<int>num={2, 2, 1, 1, 1, 2, 2};
int answer=Find_the_Majority_Element(num);
cout<<"majority element is : "<<answer;

    return 0;
}
