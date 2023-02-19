NO OF ODDS AND EVENS

#include <stdio.h>

int main() {
    int arr[100], n, i, evens = 0, odds = 0;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evens++;
        } else {
            odds++;
        }
    }
    
    printf("Number of even numbers: %d\n", evens);
    printf("Number of odd numbers: %d\n", odds);
    
    return 0;
}
