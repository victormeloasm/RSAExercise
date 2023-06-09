#include <stdio.h>

// Function to calculate the modular inverse using the extended Euclidean algorithm
unsigned long long modInverse(unsigned long long e, unsigned long long phi) {
    long long r1 = phi, r2 = e, t1 = 0, t2 = 1;

    while (r2 > 0) {
        long long q = r1 / r2;
        long long temp = r2;
        r2 = r1 - q * r2;
        r1 = temp;
        temp = t2;
        t2 = t1 - q * t2;
        t1 = temp;
    }

    if (r1 == 1)
        return (t1 + phi) % phi;

    return 0; // Modular inverse doesn't exist
}

int main() {
    unsigned long long p = 123341;
    unsigned long long q = 130343;
    unsigned long long e = 456233;

    unsigned long long phi = (p - 1) * (q - 1);
    unsigned long long d = modInverse(e, phi);

    printf("Private key exponent (d): %llu\n", d);

    return 0;
}

// d or entire private key = 3693459617
