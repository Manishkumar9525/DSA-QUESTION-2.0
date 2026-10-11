/*
Question: 3Sum Closest

Given an integer array nums of length n and an integer target, find
three integers in nums such that the sum is closest to target.
Return the sum of the three integers.

You may assume that each input has exactly one solution.

Example:
Input:  nums = [-1, 2, 1, -4], target = 1
Output: 2
Explanation: The sum 2 is closest to target 1.
*/

#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    if (nums.size() < 3) {
        throw invalid_argument("The array must contain at least three elements.");
    }

    sort(nums.begin(), nums.end());
    long long closestSum =
        static_cast<long long>(nums[0]) + nums[1] + nums[2];

    for (int i = 0; i < static_cast<int>(nums.size()) - 2; i++) {
        int left = i + 1;
        int right = static_cast<int>(nums.size()) - 1;

        while (left < right) {
            long long currentSum =
                static_cast<long long>(nums[i]) + nums[left] + nums[right];

            if (llabs(currentSum - target) < llabs(closestSum - target)) {
                closestSum = currentSum;
            }

            if (currentSum < target) {
                left++;
            } else if (currentSum > target) {
                right--;
            } else {
                return target;
            }
        }
    }

    return static_cast<int>(closestSum);
}

int main() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    cout << threeSumClosest(nums, target) << endl;

    return 0;
}
