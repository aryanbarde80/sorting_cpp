#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {5, 2, 8, 1, 3};

    sort(arr.begin(), arr.end());

    for (int x : arr) {
        cout << x << " ";
    }
}
