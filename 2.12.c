REMOVE DUPLICATES FROM SORTED ARRAY

#include <stdio.h>

void removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) {
        // Array is already sorted or empty
        return;
    }
    
    int j = 0;
    
    for (int i = 0; i < n-1; i++) {
        if (arr[i] != arr[i+1]) {
            arr[j] = arr[i];
            j++;
        }
    }
    
    arr[j] = arr[n-1];
    j++;
    
    // Set remaining elements to zero
    for (int i = j; i < n; i++) {
        arr[i] = 0;
    }
}

int main() {
    int n, arr[100];
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array in sorted order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    removeDuplicates(arr, n);
    
    printf("The array with duplicates removed is: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    
    return 0;
}
