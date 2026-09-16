#include <bits/stdc++.h>
using namespace std;

int StudentsNeeded(const vector<int>& pages, int maxPages) {
    int students = 1;
    int pagesAllocated = 0;

    for (int pageCount : pages) {
        if (pagesAllocated + pageCount <= maxPages) {
            pagesAllocated += pageCount;
        } else {
            students++;
            pagesAllocated = pageCount;
        }
    }

    return students;
}

int Allocate_Minimum_Number_of_Pages(const vector<int>& pages, int students) {
 

    int low = *max_element(pages.begin(), pages.end());
    int high = accumulate(pages.begin(), pages.end(), 0);

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (StudentsNeeded(pages, mid) <= students) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return low;
}

int main() {
    vector<int> pages{12, 34, 67, 90};
    int students = 2;

    cout << Allocate_Minimum_Number_of_Pages(pages, students);
    return 0;
}
