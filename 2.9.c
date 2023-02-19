SUB ARRAY WITH SUM 0


#include <stdio.h>

int findSubarray(int arr[], int n) {
    int sum = 0;
    
    int hash[100000] = {0};
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        
        if (sum == 0 || hash[sum] != 0) {
            printf("Subarray with 0 sum found from index %d to %d\n", hash[sum], i);
            return 1;
        }
        
        hash[sum] = i + 1;
    }
    
    return 0;
}

int main() {
    int n, arr[100];
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    if (findSubarray(arr, n)) {
        printf("Subarray with 0 sum found\n");
    } else {
        printf("Subarray with 0 sum not found\n");
    }
    
    return 0;
}
