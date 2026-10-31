#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no swaps occurred, the array is already sorted.
        if (!swapped) {
            break;
        }
    }
}

int main() {
    vector<int> arr = {5, 3, 8, 2, 1};

    bubbleSort(arr);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
