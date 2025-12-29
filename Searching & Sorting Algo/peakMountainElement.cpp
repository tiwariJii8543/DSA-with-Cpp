// Find a peak (mountain) element in an array using binary search
#include <iostream>
using namespace std;

int findPeak(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < arr[mid + 1])
            low = mid + 1;
        else
            high = mid;
    }
    return low; // index of a peak element
}

int main() {
    int arr[] = {1,2,3,4,5,6,3,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int peakIdx = findPeak(arr, n);
    cout << "Peak element is: " << arr[peakIdx] << " at index " << peakIdx << endl;
    return 0;
}