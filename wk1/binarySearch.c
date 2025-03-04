#include <stdio.h>

int binarySearch(int arr[], int size, int val) {
    int lo = 0;
    int hi = size - 1;
    while (lo <= hi) {
    int mid = (lo + hi) / 2;
    if (val < arr[mid]) {
    hi = mid - 1;
    } else if (val > arr[mid]) {
    lo = mid + 1;
    } else {
    return mid;
    }
    }
    return -1;
}

int main()
{
    int arr[11] = {11,14,17,19,21,24,28,31,33,36,38};
    binarySearch(arr, 11, 13);
}