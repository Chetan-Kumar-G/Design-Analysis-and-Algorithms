#include <stdio.h>
#include <stdlib.h>

void bucketSort(int arr[], int n) {
    // 1. Find the maximum value in the array
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    // 2. Create a bucket array of size max+1 (counting sort method)
    int *bucket = (int *)calloc(max + 1, sizeof(int));

    // 3. Fill the bucket (count occurrences)
    for (int i = 0; i < n; i++)
        bucket[arr[i]]++;

    // 4. Rewrite sorted array
    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (bucket[i] > 0) {
            arr[index++] = i;
            bucket[i]--;
        }
    }

    free(bucket);
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    bucketSort(arr, n);

    printf("\nSorted Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

