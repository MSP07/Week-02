MERGE TWO SORTED ARRAYS

#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int mergedArr[]) {
    int i = 0, j = 0, k = 0;
    
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            mergedArr[k] = arr1[i];
            i++;
        } else {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        mergedArr[k] = arr1[i];
        i++;
        k++;
    }
    
   
    while (j < n2) {
        mergedArr[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int n1, n2, arr1[100], arr2[100], mergedArr[200];
    
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    printf("Enter the elements of the first array in sorted order: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    printf("Enter the elements of the second array in sorted order: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    mergeArrays(arr1, n1, arr2, n2, mergedArr);
    
    printf("The merged array is: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");
    
    return 0;
}
