#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define COLUMN 400
#define ROW 1000
#define BYTES_LENGTH 1024

/*
====================
Reads the file in string by accepting path as argument 
and returns file content in string
====================
*/
char *read_file_string(char path[]) {
    FILE *pFile = fopen(path, "r");

    if(pFile == NULL) {
        printf("Unable to read file: %s", path);

        fclose(pFile);
        return "Error";
    }

    char each_line[COLUMN];
    static char file_content[COLUMN * ROW];

    while(fgets(each_line, sizeof(each_line), pFile)) {
        strcat(file_content, each_line);
    }

    fclose(pFile);
    return file_content;
}

/*
====================
Write the file in string by accepting path and content as arguments
returns -1 for failure and 0 for success
====================
*/
int write_file_string(char path[], char file_content[]) {
    FILE *pFile = fopen(path, "w");

    if(pFile == NULL) {
        printf("Unable to access/write file: %s", path);

        fclose(pFile);
        return -1;
    }

    fprintf(pFile, "%s", file_content);

    fclose(pFile);
    return 0;
}

/*
====================
Reads the file in bytes by accepting path, bytes pointer 
and bytes size pointer as argument and returns -1 for failure and 0 for success
====================
*/
int read_file_bytes(char path[], unsigned char **bytes, size_t *byte_size) {
    FILE *pFile = fopen(path, "rb");

    if(pFile == NULL) {
        printf("Unable to access/read file: %s", path);
        return -1;
    }

    unsigned char file_bytes[BYTES_LENGTH];
    size_t file_byte_size = fread(file_bytes, 1, sizeof(file_bytes), pFile);

    *byte_size = file_byte_size;
    *bytes = (unsigned char *)malloc(*byte_size);

    if(*bytes != NULL) {
        strcpy((unsigned char *)*bytes, file_bytes);
    } else {
        printf("Unable to allocate memory");

        fclose(pFile);
        return -1;
    }

    fclose(pFile);
    return 0;
}