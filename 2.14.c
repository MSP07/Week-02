COUNT PRIMES

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

int countPrimes(int start, int end) {
    int count = 0;
    
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int start, end;
    
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);
    
    int count = countPrimes(start, end);
    
    printf("There are %d prime numbers in the range [%d, %d]\n", count, start, end);
    
    return 0;
}
