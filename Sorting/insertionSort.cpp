#include<iostream>
#include<vector>
using namespace std;
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

    for (int i=0;i<=n-1;i++) {
        int j=i;
        while (j>0 && arr[j-1]>arr[j]) {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;

            j--;
    }}
    for (auto x : arr) {
        cout << x << "\t";
    }
    return 0;
}
// This code implements the Insertion Sort algorithm, which sorts an array in O(n^2) time complexity. 
// It reads an array of integers from input, sorts it in ascending order using the Insertion Sort method, and then outputs the sorted array. 