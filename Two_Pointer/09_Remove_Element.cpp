/*
Question: Remove Element

Given an integer array nums and an integer val, remove all occurrences of val
in-place. Return the number of elements in nums that are not equal to val.
The first k elements of nums should contain all elements not equal to val.

Example:
Input:  nums = [3, 2, 2, 3], val = 3
Output: 2
nums = [2, 2, _, _]
*/

#include <bits/stdc++.h>
using namespace std;

int Remove_Element(vector<int>& nums, int val) {
    int left = 0;

    for (int right = 0; right < nums.size(); ++right) {
        if (nums[right] != val) {
            nums[left++] = nums[right];
        }
    }

    return left;
}

int main() {
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int k = Remove_Element(nums, val);

    cout << "Length of remaining array: " << k << endl;
    for (int i = 0; i < k; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
