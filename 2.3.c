REARRANGE ARRAY

#include <stdio.h>

int main() {
    int n, arr[100], i, j, temp;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    i = 0;
    j = n-1;
    while (i < j) {
        if (arr[i] < 0) {
            i++;
        } else if (arr[j] >= 0) {
            j--;
        } else {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    
    printf("The rearranged array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
