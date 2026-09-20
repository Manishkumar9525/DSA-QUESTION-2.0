#include <iostream>
#include <string>
using namespace std;

// Question: Implement the reverse of a string.
//
// Input:
// String: hello
//
// Output:
// Reverse of the string is olleh.

int main() {
    string text = "hello";
    int n=text.length();
    int s=0;int e=n-1;
    while(s<=e){
        swap(text[s],text[e]);
        s++;e--;
    }
    cout << "Reverse string: " << text << endl;

    return 0;
}
