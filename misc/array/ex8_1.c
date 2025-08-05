	#include <stdio.h>

void sortArray(int arr[], int n) {
    // Using bubble sort for simplicity
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int countDuplicates(int arr[], int n) {
    int count = 0;
    
    for (int i = 0; i < n-1; i++) {
        if (arr[i] == arr[i+1]) {
            count++;
            // Skip all duplicates of the current element
            while (i < n-1 && arr[i] == arr[i+1]) {
                i++;
            }
        }
    }
    
    return count;
}

int main() {
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sort the array
    sortArray(arr, n);
    
    printf("\nSorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Count duplicates
    int duplicateCount = countDuplicates(arr, n);
    printf("\nTotal number of duplicate elements: %d\n", duplicateCount);
    
    return 0;
}
