#include <stdio.h>

#include "../include/file_handler.h"
#include "../include/preprocessor.h"

int main() {
    unsigned char *bytes = NULL;
    size_t byte_size = 0;

    read_file_bytes("data/raw/test_corpus.txt", &bytes, &byte_size);
    preprocessor(&bytes, &byte_size);

    printf("\n");
    return 0;
}