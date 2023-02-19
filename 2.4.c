FIND DUPLICATE

#include <stdio.h>
#include <math.h>

void printRepeating(int arr[], int n) {
    int i;
    
    for (i = 0; i < n; i++) {
        // Check if the element at the current index has been visited
        if (arr[abs(arr[i])] >= 0) {
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        } else {
            printf("%d ", abs(arr[i]));
        }
    }
}

int main() {
    int n, arr[100], i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("The repeating numbers are: ");
    printRepeating(arr, n);
    
    return 0;
}
