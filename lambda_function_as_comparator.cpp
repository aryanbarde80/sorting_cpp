#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> arr = {4, 1, 7, 3, 9};

    sort(arr.begin(), arr.end(),
        [](int a, int b) {
            return a > b;
        }
    );

    // Print sorted array
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
