#include <bits/stdc++.h>
using namespace std;

// Question: Count binary subarrays whose sum equals goal.
// Input: nums = {1, 0, 1, 0, 1}, goal = 2
// Output: 4

int Binary_Subarrays_With_Sum(const vector<int>& nums, int goal) {
    unordered_map<int, int> prefixFrequency;
    prefixFrequency[0] = 1;

    int prefixSum = 0;
    int count = 0;

    for (int value : nums) {
        prefixSum += value;

        auto previous = prefixFrequency.find(prefixSum - goal);
        if (previous != prefixFrequency.end()) {
            count += previous->second;
        }

        prefixFrequency[prefixSum]++;
    }

    return count;
}

int main() {
    vector<int> nums = {1, 0, 1, 0, 1};
    int goal = 2;

    cout << Binary_Subarrays_With_Sum(nums, goal);

    return 0;
}