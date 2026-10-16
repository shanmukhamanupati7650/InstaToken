#include <stdio.h>
#include <string.h>

#include "../include/file_handler.h"
#include "../include/preprocessor.h"

struct PreprocessOptions {
    char type[10];
    int remove_white_spaces;
    int trim_spaces;
};

int main() {
    struct PreprocessOptions process_options;
    strcpy(process_options.type, "Bytes");
    process_options.remove_white_spaces = 0;
    process_options.trim_spaces = 0;

    unsigned char *bytes_buffer = NULL;
    size_t byte_size = 0;

    read_file_bytes("data/raw/test_corpus.txt", &bytes_buffer, &byte_size);
    preprocessor(&bytes_buffer, &byte_size, &process_options);

    printf("\n");
    return 0;
}