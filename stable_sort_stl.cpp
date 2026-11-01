#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    vector<pair<string, int>> students = {
        {"A", 90},
        {"B", 80},
        {"C", 90},
        {"D", 80}
    };

    stable_sort(students.begin(), students.end(),
        [](auto a, auto b) {
            return a.second < b.second;
        }
    );

    // Print sorted students
    for (auto student : students) {
        cout << student.first << " : " << student.second << endl;
    }

    return 0;
}
