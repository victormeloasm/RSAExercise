#include <stdio.h>

int main() {
    unsigned long long p = 123341;
    unsigned long long q = 130343;
    unsigned long long e = 456233;

    unsigned long long n = p * q;

    printf("Modulus (n): %llu\n", n);
    printf("Public exponent (e): %llu\n", e);

    return 0;
}

//Public key (n, e): (16076635963, 456233)
