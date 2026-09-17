#include <bits/stdc++.h>
using namespace std;

// K-th Element of Two Sorted Arrays
// Approach: merge both sorted arrays into one sorted array and return the k-th element.

int Kth_Element_of_Two_Sorted_Arrays(vector<int> nums1, vector<int> nums2, int k) {
    int i = 0;
    int j = 0;
    int count = 0;

    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] <= nums2[j]) {
            count++;
            if (count == k) return nums1[i];
            i++;
        } else {
            count++;
            if (count == k) return nums2[j];
            j++;
        }
    }

    while (i < nums1.size()) {
        count++;
        if (count == k) return nums1[i];
        i++;
    }

    while (j < nums2.size()) {
        count++;
        if (count == k) return nums2[j];
        j++;
    }

    return -1;
}

int main() {
    vector<int> nums1 = {2, 3, 6, 7, 9};
    vector<int> nums2 = {1, 4, 8, 10};
    int k = 5;

    cout << Kth_Element_of_Two_Sorted_Arrays(nums1, nums2, k) << endl;
    return 0;
}
