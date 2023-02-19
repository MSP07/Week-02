MAX SUBARRAY

#include <stdio.h>

void findMaxSubarray(int arr[], int n) {
    int max_so_far = arr[0];
    int max_ending_here = arr[0];
    int start = 0, end = 0, s = 0;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_ending_here + arr[i]) {
            max_ending_here = arr[i];
            s = i;
        } else {
            max_ending_here += arr[i];
        }
        
        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }
    }
    
    printf("Maximum subarray is: ");
    for (int i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, arr[100];
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    findMaxSubarray(arr, n);
    
    return 0;
}
