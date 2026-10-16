#include <stdio.h>
// Maintain same error handling for preprocessor and sub modules

struct PreprocessOptions {
    char type[10];
    int remove_white_spaces;
    int trim_spaces;
};

int text_transformer() { // Maintain Pipeline engine(sequence) for transformation
    return 0;
}

int validator() {
    return 0;
}

int buffer_manager() {
    return 0;
}

// Maintain orceshtration and input interface
int preprocessor(unsigned char **input, size_t *input_size, struct PreprocessOptions *options) {
    printf("Size: %zu\n", *input_size);

    for(size_t i = 0; i < *input_size; i++) {
        printf("%02X ", (*input)[i]);
    }

    printf("\n");

    printf("%s\n", options->type);
    printf("%d\n", options->remove_white_spaces);
    printf("%d", options->trim_spaces);

    return 0;
}