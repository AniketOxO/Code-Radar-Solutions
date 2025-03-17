#include <stdio.h>
#include <string.h>

void compressString(char *str, char *compressed) {
    int len = strlen(str);
    int index = 0, count;

    for (int i = 0; i < len; i++) {
        compressed[index++] = str[i];  
        count = 1;

        while (i + 1 < len && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        
        int numLen = sprintf(compressed + index, "%d", count);
        index += numLen;
    }

    compressed[index] = '\0'; 

    if (strlen(compressed) >= len) {
        strcpy(compressed, str);
    }
}