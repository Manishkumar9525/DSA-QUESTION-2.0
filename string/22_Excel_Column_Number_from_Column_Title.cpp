#include <iostream>
using namespace std;

// Question: Given an Excel column title, find its corresponding column number.
//
// Input:
// Column title = "AB"
//
// Output:
// 28

int excelColumnNumber(string s){
  int result=0;

  for( auto c:s){
    result*=26;
    result+=c-'A'+1;
  }
  return result;
}


int main()
{
  cout<<excelColumnNumber("AB") << endl;
    return 0;
}
