#include <bits/stdc++.h>
using namespace std;

void bucketSort(vector<float>& arr) {
    int n = arr.size();

    if (n <= 1) return;

    vector<vector<float>> buckets(n);

    // Distribute elements into buckets
    for (float x : arr) {
        int index = n * x;
        buckets[index].push_back(x);
    }

    // Sort individual buckets
    for (auto& bucket : buckets) {
        sort(bucket.begin(), bucket.end());
    }

    // Combine buckets
    int index = 0;

    for (auto& bucket : buckets) {
        for (float x : bucket) {
            arr[index++] = x;
        }
    }
}

int main() {
    vector<float> arr = {
        0.42, 0.32, 0.75, 0.12, 0.89, 0.23
    };

    bucketSort(arr);

    for (float x : arr) {
        cout << x << " ";
    }

    return 0;
}
