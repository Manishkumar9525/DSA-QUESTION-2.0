// Question: Given a string, reverse the order of the words in the string.
//
// Example Input:
// "the sky is blue"
//
// Example Output:
// "blue is sky the"

#include <iostream>
using namespace std;

string Reverse_Words(string str){
  int right=str.length()-1;
  string ans="";
  while(right>=0){
     while(right>=0 && str[right]==' '){
         right--;
     }
        if(right<0){
          break;
        }
   int left=right;
    while(left>=0 && str[left]!=' '){
      left--;
    }
    if(!ans.empty()){
      ans+=" ";
    }
    for(int i=left+1;i<=right;i++){
      ans+=str[i];
    }
    right=left-1;
  }
  return ans;
}




int main() {
  string str="the sky is blue";
   string answer=Reverse_Words(str);
   cout<<answer;
    return 0;
}
