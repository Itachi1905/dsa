#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int>& arr, int low, int high) {
    if (low >= high) return;

    int pivot = arr[low];
    int i = low + 1, j = high;
    while (i <= j) {
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        while (j >= low && arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]); // Correctly place the pivot

    quickSort(arr, low, j - 1);  // Sort the left part
    quickSort(arr, j + 1, high); // Sort the right part
}

int main() {
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = arr.size();

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
