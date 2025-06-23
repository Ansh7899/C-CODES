#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>arr ;
    int x=0;
    int n = 0;
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>x;
        arr.push_back(x);
    }
    int min=-1;
    // int n = arr.size();
    for (int i=0;i<=n-2;i++) {
        min = i;
        for (int j=i; j<=n-1 ; j++) {
            if( arr[j] <= arr[min]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    for (auto x : arr) {
        cout<< x << "\t";
    }
    return 0;
}