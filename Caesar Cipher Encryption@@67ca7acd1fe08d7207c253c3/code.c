#include <stdio.h>
#include <ctype.h>

void caesarCipher(char message[], int shift) {
    for (int i = 0; message[i] != '\0'; i++) {
        char ch = message[i];

        // Check if character is uppercase
        if (isupper(ch)) {
            message[i] = ((ch - 'A' + shift) % 26) + 'A';
        }
        // Check if character is lowercase
        else if (islower(ch)) {
            message[i] = ((ch - 'a' + shift) % 26) + 'a';
        }
        // Leave non-alphabetic characters unchanged
    }
}