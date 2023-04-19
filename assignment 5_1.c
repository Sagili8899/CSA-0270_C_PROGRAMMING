#include <stdio.h>
#include <string.h>

int main() {
    FILE *input_file, *output_file;
    char input_line[1000];
    char *error_string = "error";

    // Open the input file
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Error opening input file\n");
        return 1;
    }

    // Open the output file
    output_file = fopen("error_log.txt", "w");
    if (output_file == NULL) {
        printf("Error opening output file\n");
        return 1;
    }

    // Loop through each line in the input file
    while (fgets(input_line, sizeof(input_line), input_file)) {
        // Check if the line contains the error string
        if (strstr(input_line, error_string) != NULL) {
            // Write the line to the output file
            fputs(input_line, output_file);
        }
    }

    // Close the files
    fclose(input_file);
    fclose(output_file);

    // Reopen the output file for reading
    output_file = fopen("error_log.txt", "r");
    if (output_file == NULL) {
        printf("Error opening error log file\n");
        return 1;
    }

    // Print the contents of the error log file to the console
    printf("Contents of error log file:\n");
    while (fgets(input_line, sizeof(input_line), output_file)) {
        printf("%s", input_line);
    }

    // Close the file
    fclose(output_file);

    return 0;
}
// output
Contents of error log file:
Error: Could not open file
Error: Out of memory
