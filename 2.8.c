TRIPLET OF A NUMBER

#include <stdio.h>

int findTriplet(int arr[], int n, int sum) {
    
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == sum) {
                    printf("Triplet is %d, %d, %d\n", arr[i], arr[j], arr[k]);
                    return 1;
                }
            }
        }
    }
    
    return 0;
}

int main() {
    int n, arr[100], sum;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the sum to check for triplets: ");
    scanf("%d", &sum);
    
    if (findTriplet(arr, n, sum)) {
        printf("Triplet found\n");
    } else {
        printf("Triplet not found\n");
    }
    
    return 0;
}
