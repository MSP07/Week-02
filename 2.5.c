MISSING NUMBER

#include <stdio.h>

int getMissingNumber(int arr[], int n) {
    int i, total = 1;
    
    for (i = 2; i <= (n + 1); i++) {
        total += i;
    }
    
    for (i = 0; i < n; i++) {
        total -= arr[i];
    }
    
    // Return the missing number
    return total;
}

int main() {
    int n, arr[100], i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("The missing number is: %d\n", getMissingNumber(arr, n-1));
    
    return 0;
}
