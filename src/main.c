#include <stdio.h>

#include "../include/file_handler.h"

int main() {
    char *file_content = read_file_string("data/raw/test_corpus.txt");
    printf("%s\n", file_content);

    write_file_string("data/processed/processed_test_corpus.txt", file_content);

    unsigned char *bytes = NULL;
    size_t byte_size = 0;

    read_file_bytes("data/raw/test_corpus.txt", &bytes, &byte_size);

    for(size_t i = 0; i < byte_size; i++) {
        printf("%02X ", bytes[i]);
    }

    printf("\n");

    return 0;
}