
#include <iostream>
#include <algorithm>
using namespace std;

int countDistinct(int arr[], int n) {
    if (n == 0) return 0;
    sort(arr, arr + n);
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1])
            count++;
    }
    return count;
}

int main() {
    int arr[] = {5, 2, 2, 8, 5, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Number of distinct elements: " << countDistinct(arr, n) << endl;
    return 0;
}

