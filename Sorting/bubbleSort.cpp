#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort - O(n^2)
int main() {
    vector<int> arr;
    int x = 0;
    int n = 0;

    // Input array size and elements
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }

    // Bubble Sort logic
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Output sorted array
    for (auto x : arr) {
        cout << x << "\t";
    }
    return 0;
}
