#include <stdio.h>
// Maintain same error handling for preprocessor and sub modules

struct options {
    int remove_whitespaces;
    int trim_spaces;
};

int text_transformer() { // Maintain Pipeline engine(sequence) for transformation
    return 0;
}

/*
Ranges for hex-decimal bytes
Less than (or) equals "0x7F" - 1
Greater than (or) equals "0xC2" and "0xDF" - 2
Greater than (or) equals "0xE0" and "0xEF" - 3
Greater than (or) equals "0xF0" and "0xF4" - 4
*/

int validator(unsigned char *bytes, size_t bytes_size) {
    size_t i = 0;

    while(i < bytes_size) {
        if(bytes[i] >= 0x00 && bytes[i] <= 0x7F) {
            printf("Byte - 1: %02X\n", bytes[i]);
            i++;
        } else if(bytes[i] >= 0xC2 && bytes[i] <= 0xDF) {
            printf("Bytes - 2: %02X %02X\n", bytes[i], bytes[i + 1]);
            i += 2;
        } else if(bytes[i] >= 0xE0 && bytes[i] <= 0xEF) {
            printf("Bytes - 3: %02X %02X %02X\n", bytes[i], bytes[i + 1], bytes[i + 2]);
            i += 3;
        } else if(bytes[i] >= 0xF0 && bytes[i] <= 0xF4) {
            printf("Bytes - 4: %02X %02X %02X %02X\n", bytes[i], bytes[i + 1], bytes[i + 2], bytes[i + 3]);
            i += 4;
        }
    }

    return 0;
}

// Maintain orceshtration and input interface
int preprocessor(unsigned char **bytes_buffer, size_t *bytes_size) {
    struct options txtOps;

    validator(*bytes_buffer, *bytes_size);

    return 0;
}