#include <stdio.h>

int getSecondLargest(int arr[], int n) {
    if (n < 2) return -1;

    int largest = -1;
    int secondLargest = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Second Largest: %d", getSecondLargest(arr, n));

    return 0;
}
