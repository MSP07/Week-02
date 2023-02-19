LONGEST CONSECUTIVE SUBSEQUENCE

#include <stdio.h>

int findLongestSubsequence(int arr[], int n) {
    int maxLength = 1; // Initialize the length of the longest sub-sequence to 1
    
    for (int i = 0; i < n - 1; i++) {
        int min = arr[i];
        int max = arr[i];
        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < min) {
                min = arr[j];
            }
            if (arr[j] > max) {
                max = arr[j];
            }
            if (max - min == j - i) {
           
                int length = max - min + 1;
                if (length > maxLength) {
                    maxLength = length;
                }
            }
        }
    }
    
    return maxLength;
}

int main() {
    int n, arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("The length of the longest sub-sequence of consecutive integers is: %d\n", findLongestSubsequence(arr, n));
    
    return 0;
}
