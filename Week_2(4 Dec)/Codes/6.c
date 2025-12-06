#include <stdio.h>

// Heapify for Min-Heap
void minHeapify(int arr[], int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] < arr[smallest])
        smallest = left;

    if (right < n && arr[right] < arr[smallest])
        smallest = right;

    if (smallest != i) {
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;

        minHeapify(arr, n, smallest);
    }
}

// Heap Sort using Min-Heap (descending)
void heapSortMin(int arr[], int n) {
    // Build min heap
    for (int i = n/2 - 1; i >= 0; i--)
        minHeapify(arr, n, i);

    // Extract elements one by one
    for (int i = n - 1; i > 0; i--) {
        // Move smallest to end
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Heapify root on reduced heap
        minHeapify(arr, i, 0);
    }
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    heapSortMin(arr, n);

    printf("\nSorted in Descending Order (Min Heap): ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

