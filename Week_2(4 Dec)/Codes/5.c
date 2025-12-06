#include <stdio.h>

// Heapify for Max-Heap
void maxHeapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        maxHeapify(arr, n, largest);
    }
}

// Heap Sort using Max-Heap (ascending)
void heapSortMax(int arr[], int n) {
    // Build max heap
    for (int i = n/2 - 1; i >= 0; i--)
        maxHeapify(arr, n, i);

    // Extract elements one by one
    for (int i = n - 1; i > 0; i--) {
        // Move largest to end
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Heapify root on reduced heap
        maxHeapify(arr, i, 0);
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

    heapSortMax(arr, n);

    printf("\nSorted in Ascending Order (Max Heap): ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

