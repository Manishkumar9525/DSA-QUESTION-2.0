#include<bits/stdc++.h>
#include <iostream>
using namespace std;

// Question: Find the length of the longest consecutive sequence in an array.
// Input: nums = [100, 4, 200, 1, 3, 2]
// Output: 4

int Longest_Consecutive_Sequence(vector<int> nums) {
    unordered_set<int> values(nums.begin(), nums.end());
    int longest = 0;

    for (int value : values) {
        if (values.find(value - 1) == values.end()) {
            int current = value;
            int length = 1;

            while (values.find(current + 1) != values.end()) {
                current++;
                length++;
            }

            longest = max(longest, length);
        }
    }

    return longest;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    int result = Longest_Consecutive_Sequence(nums);
    cout << result;

    return 0;
}
