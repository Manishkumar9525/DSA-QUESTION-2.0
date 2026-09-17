#include <bits/stdc++.h>
using namespace std;

// Painter's Partition Problem
// Given board lengths and number of painters, each painter paints contiguous boards.
// Every painter paints with the same speed, and each board takes time equal to its length.
// We need the minimum possible maximum time assigned to any painter.

int PaintersNeeded(const vector<int>& boards, int maxTime) {
    int painters = 1;
    int timeUsed = 0;

    for (int boardLen : boards) {
        if (timeUsed + boardLen <= maxTime) {
            timeUsed += boardLen;
        } else {
            painters++;
            timeUsed = boardLen;
        }
    }

    return painters;
}

int Painters_Partition_Problem(const vector<int>& boards, int painters) {
    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (PaintersNeeded(boards, mid) <= painters) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return low;
}

int main() {
    vector<int> boards = {10, 20, 30, 40};
    int painters = 2;

    cout << Painters_Partition_Problem(boards, painters) << endl;
    return 0;
}
