#include <stdio.h>
// Maintain same error handling for preprocessor and sub modules

struct options {
    int remove_whitespaces;
    int trim_spaces;
};

int text_transformer() { // Maintain Pipeline engine(sequence) for transformation
    return 0;
}

int validator(unsigned char *bytes, size_t bytes_size) {
    for(size_t i = 0; i < bytes_size; i++) {
        printf("%02X ", bytes[i]);
    }

    return 0;
}

// Maintain orceshtration and input interface
int preprocessor(unsigned char **bytes_buffer, size_t *bytes_size) {
    struct options txtOps;

    validator(*bytes_buffer, *bytes_size);

    return 0;
}