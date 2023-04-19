#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *in_file, *out_file;
    char *buffer, *p;
    long size;

    // Open the input file for reading
    in_file = fopen("input.txt", "r");
    if (in_file == NULL) {
        printf("Error opening input file\n");
        return 1;
    }

    // Get the size of the input file
    fseek(in_file, 0L, SEEK_END);
    size = ftell(in_file);
    rewind(in_file);

    // Allocate a buffer to hold the input file contents
    buffer = (char *)malloc(size + 1);
    if (buffer == NULL) {
        printf("Error allocating memory\n");
        fclose(in_file);
        return 1;
    }

    // Read the input file contents into the buffer
    fread(buffer, size, 1, in_file);
    fclose(in_file);
    buffer[size] = '\0';

    // Replace all occurrences of "red" with "blue" in the buffer
    p = buffer;
    while ((p = strstr(p, "red")) != NULL) {
        memcpy(p, "blue", 4);
        p += 4;
    }

    // Open the output file for writing
    out_file = fopen("output.txt", "w");
    if (out_file == NULL) {
        printf("Error opening output file\n");
        free(buffer);
        return 1;
    }

    // Write the modified text to the output file
    fputs(buffer, out_file);
    fclose(out_file);

    // Free the buffer
    free(buffer);

    return 0;
}
// output
The sky is red today
The sky is blue today.


