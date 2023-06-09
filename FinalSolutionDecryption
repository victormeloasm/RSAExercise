#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef unsigned __int128 uint128_t;

uint128_t mod_exp(uint128_t base, uint128_t exponent, uint128_t modulus) {
    uint128_t result = 1;
    while (exponent > 0) {
        if (exponent & 1) {
            result = (result * base) % modulus;
        }
        base = (base * base) % modulus;
        exponent >>= 1;
    }
    return result;
}

void reverse_string(char* str) {
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

void decrypt_message(uint128_t encrypted_message, uint128_t private_key, uint128_t modulus) {
    uint128_t decrypted_message = mod_exp(encrypted_message, private_key, modulus);

    char message[128];  // Assuming 128-bit message length
    int index = 0;
    while (decrypted_message > 0) {
        unsigned char ascii_value = decrypted_message & 0xFF;
        message[index] = ascii_value;
        decrypted_message >>= 8;
        index++;
    }
    message[index] = '\0';

    reverse_string(message);

    printf("Decrypted Message (reversed): %s\n", message);
}

int main() {
    uint128_t modulus = 16076635963;
    uint128_t public_exponent = 456233;
    uint128_t private_key = 3693459617;
    uint128_t encrypted_message = 5395334961;

    decrypt_message(encrypted_message, private_key, modulus);

    return 0;
}

// The Message encrypted by RSA was "BLAU" 
