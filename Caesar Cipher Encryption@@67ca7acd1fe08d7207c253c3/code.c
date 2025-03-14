#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to perform Caesar Cipher encryption
void caesarCipher(char message[], int shift, char encrypted[]) {
    int i;
    for (i = 0; message[i] != '\0'; i++) {
        char ch = message[i];

        if (isupper(ch)) {
            encrypted[i] = ((ch - 'A' + shift) % 26) + 'A';
        } 
        else if (islower(ch)) {
            encrypted[i] = ((ch - 'a' + shift) % 26) + 'a';
        } 
        else {
            encrypted[i] = ch; // Keep non-alphabetic characters unchanged
        }
    }
    encrypted[i] = '\0'; // Null-terminate the encrypted string
}