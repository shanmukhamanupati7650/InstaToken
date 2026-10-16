#ifndef PREPROCESSOR_H
#define PREPROCESSOR_H

struct PreprocessOptions {
    char type[10];
    int remove_white_spaces;
    int trim_spaces;
};

int preprocessor(unsigned char **input, size_t *input_size, struct PreprocessOptions *options);

#endif