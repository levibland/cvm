#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/util.h"

// cvm compile file.cvm

int main(int argc, char** argv) {
    if (argc < 3) {
        printf("Error: too few arguments.");
        return 1;
    }

    // Really dumb C thing.
    if (strcmp(argv[1], "compile") == 0) {
        char* source = read_ascii_file(argv[2]);
        // No god damn memory leaks
        free(source);
    }
    
    return 0;
}