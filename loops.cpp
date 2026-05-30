#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        cout << i << ' ';
    }
    cout << '\n';

    int j = 0;
    while (j < 5) {
        cout << j << ' ';
        j++;
    }
    cout << '\n';

    int k = 0;
    do {
        cout << k << ' ';
        k++;
    } while (k < 5);
    cout << '\n';

    vector<int> nums = {10, 20, 30, 40, 50};

    for (int num : nums) {
        cout << num << ' ';
    }
    cout << '\n';

    for (auto num : nums) {
        cout << num << ' ';
    }
    cout << '\n';

    string s = "HELLO";

    for (char ch : s) {
        cout << ch << ' ';
    }
    cout << '\n';

    return 0;
}
