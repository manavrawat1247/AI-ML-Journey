#include <stdio.h>

int findMaximum(int arr[], int n) {
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int findMinimum(int arr[], int n) {
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }

    return min;
}

int calculateSum(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    return sum;
}

float calculateAverage(int arr[], int n) {
    int sum = calculateSum(arr, n);

    return (float)sum / n;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nMaximum = %d", findMaximum(arr, n));
    printf("\nMinimum = %d", findMinimum(arr, n));
    printf("\nSum = %d", calculateSum(arr, n));
    printf("\nAverage = %.2f", calculateAverage(arr, n));

    return 0;
}