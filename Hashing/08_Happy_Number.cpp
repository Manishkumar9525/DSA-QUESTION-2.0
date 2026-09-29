#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Write a program to determine whether a number is a happy number.
// Input: n = 19
// Output: true

bool Happy_Number(int n) {

    unordered_set<int> st;

    while(n != 1 && st.find(n) == st.end()) {

        // Store the current number
        st.insert(n);

        int sum = 0;

        // Calculate sum of squares of digits
        while(n > 0) {

            int digit = n % 10;

            sum += digit * digit;

            n = n / 10;
        }

        n = sum;
    }

    return n == 1;
}

int main() {
  int n=19;
  int result=Happy_Number(n);
    return 0;
}
