#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    unsigned long long n = 16076635963;
    unsigned long long e = 456233;

    unsigned long long p, q;
    for (unsigned long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (isPrime(i) && isPrime(n / i)) {
                p = i;
                q = n / i;
                break;
            }
        }
    }

    printf("p: %llu\n", p);
    printf("q: %llu\n", q);

    return 0;
}


//Keys found P: 123341 and Q: 130343
