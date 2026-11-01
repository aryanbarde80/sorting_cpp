#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Custom comparator function
bool comp(int a, int b) {
    return a > b;
}

int main() {

    vector<int> arr = {4, 1, 7, 3, 9};

    // Sort in descending order
    sort(arr.begin(), arr.end(), comp);

    // Print sorted array
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
