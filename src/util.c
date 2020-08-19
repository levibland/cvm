#include "../include/util.h"

char* read_ascii_file(const char* path) {
    FILE* file = fopen(path, "r");
    if (!file) {
        printf("Error: could not open file.\n");
        return NULL;
    }

    // Get file size
    fseek(file, 0, SEEK_END);
    int size = ftell(file);
    fseek(file, 0, SEEK_SET);

    // Read file
    char* buf = (char*) malloc(sizeof(char) * (size + 1));
    if (!buf) {
        printf("Error: could not allocate memory for file.\n");
        return NULL;
    }
    fread(buf, 1, size, file);
    buf[size] = '\0';   // Null terminator
    fclose(file);

    // Return file contents
    return buf;
}