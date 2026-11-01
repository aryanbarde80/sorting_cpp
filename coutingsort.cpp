#include <bits/stdc++.h>
using namespace std;

void countingSort(vector<int>& arr) {
    if (arr.empty()) return;

    int minVal = *min_element(arr.begin(), arr.end());
    int maxVal = *max_element(arr.begin(), arr.end());

    int range = maxVal - minVal + 1;

    vector<int> count(range, 0);

    for (int x : arr) {
        count[x - minVal]++;
    }

    int index = 0;

    for (int i = 0; i < range; i++) {
        while (count[i] > 0) {
            arr[index++] = i + minVal;
            count[i]--;
        }
    }
}

int main() {
    vector<int> arr = {5, 3, 8, 2, 1, 3, 5, 2};

    countingSort(arr);

    for (int x : arr) {
        cout << x << " ";
    }

    cout << '\n';

    return 0;
}
