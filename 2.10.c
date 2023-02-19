FIRST REPEATING ELEMENT IN ARRAY

#include <stdio.h>

int findFirstRepeating(int arr[], int n) {
    int hash[100000] = {0};
    
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
        
        if (hash[arr[i]] == 2) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    int n, arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int index = findFirstRepeating(arr, n);
    
    if (index == -1) {
        printf("There is no repeating element in the array\n");
    } else {
        printf("The index of the first repeating element is %d\n", index);
    }
    
    return 0;
}
