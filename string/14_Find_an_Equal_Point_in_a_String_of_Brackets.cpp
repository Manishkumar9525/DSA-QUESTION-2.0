#include <iostream>
using namespace std;

// Question: Find an equal point in a string of brackets
// Input: (()())
// Output: 3

int Find_an_Equal_Point_in_a_String_of_Brackets(string str){
 int rightcount=0;int leftcount=0;
 for(int i=0;i<str.length();i++){
    if(str[i]==')')rightcount++;
 }

 for(int i=0;i<str.length();i++){
  if(str[i]=='('){
    leftcount++;
  }else if(str[i]==')'){
    rightcount--;
     if(leftcount==rightcount)return i+1;
  }
 }
 return -1;
}

int main() {
  string str="(()())";
  cout<<Find_an_Equal_Point_in_a_String_of_Brackets(str);
    return 0;
}
