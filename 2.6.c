FACTORIAL OF LARGE NUMBER

#include <stdio.h>

#define MAX 1000 // Maximum number of digits in the result

void multiply(int result[], int *size, int factor) {
    int carry = 0;
    
    for (int i = 0; i < *size; i++) {
        int product = result[i] * factor + carry;
        result[i] = product % 10;
        carry = product / 10;
    }
    
    while (carry > 0) {
        result[*size] = carry % 10;
        carry /= 10;
        (*size)++;
    }
}

void factorial(int n) {
    int result[MAX] = {0};
    result[0] = 1;
    int size = 1; 
    
    for (int i = 2; i <= n; i++) {
        multiply(result, &size, i);
    }
    
    printf("Factorial of %d is: ", n);
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");
}

int main() {
    int n;
    
   
    printf("Enter a number: ");
    scanf("%d", &n);
    
    factorial(n);
    
    return 0;
}
