#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

char *read_file_string(char path[]);
int write_file_string(char path[], char file_content[]);
int read_file_bytes(char path[], unsigned char **bytes, size_t *byte_size);

#endif