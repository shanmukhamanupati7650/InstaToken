#include <stdio.h>

#include "../include/file_handler.h"
#include "../include/preprocessor.h"

int main() {
    unsigned char *bytes_buffer = NULL;
    size_t bytes_size = 0;

    read_file_bytes("data/raw/test_corpus.txt", &bytes_buffer, &bytes_size);
    preprocessor(&bytes_buffer, &bytes_size);

    printf("\n");
    return 0;
}