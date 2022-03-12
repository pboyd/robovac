#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "robovac.h"

#define MEMORY_SIZE 4096

static size_t load_code(void* dest, size_t dest_size, char* path);

int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "usage: %s <program>\n", argv[0]);
        return 1;
    }

    Machine machine = {0};
    machine.memory = malloc(MEMORY_SIZE);
    if (machine.memory == NULL) {
        return 1;
    }

    size_t code_size = load_code(machine.memory, MEMORY_SIZE, argv[1]);
    if (!code_size) {
        free(machine.memory);
        return 1;
    }

    free(machine.memory);
    return 0;
}

static size_t load_code(void* dest, size_t dest_size, char* path) {
    FILE* fh = fopen(path, "r");
    if (!fh) {
        perror("error opening program");
        return 0;
    }

    size_t size = fread(dest, 1, dest_size, fh);
    int read_err = ferror(fh);
    if (read_err) {
        fclose(fh);
        fprintf(stderr, "error reading program: %s\n", strerror(read_err));
        return 0;
    }
    if (!feof(fh)) {
        fclose(fh);
        fprintf(stderr, "program exceeds available memory (%zu bytes available)\n", dest_size);
        return 0;
    }
    fclose(fh);

    return size;
}
