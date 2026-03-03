#include <stdio.h>

int missingNumber(int arr[], int size) {
    int n = size + 1; 
    long long totalSum = (long long)n * (n + 1) / 2;
    long long arraySum = 0;

    for(int i = 0; i < size; i++) {
        arraySum += arr[i];
    }

    return totalSum - arraySum;
}

int main() {
    int arr[] = {1, 2, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Missing number is: %d", missingNumber(arr, size));

    return 0;
}
