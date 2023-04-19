#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main() {
    FILE *file;
    char filename[256];
    char search_string[256];
    char line[MAX_LINE_LENGTH];

    // Prompt the user to enter the name of the file
    printf("Enter the name of the file to search: ");
    fgets(filename, 256, stdin);
    filename[strcspn(filename, "\n")] = '\0';

    // Prompt the user to enter the search string
    printf("Enter the search string: ");
    fgets(search_string, 256, stdin);
    search_string[strcspn(search_string, "\n")] = '\0';

    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Read each line of the file and print lines that contain the search string
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        if (strstr(line, search_string) != NULL) {
            printf("%s", line);
        }
    }

    // Close the file
    fclose(file);

    return 0;
}
// output
This is a test file.
It contains some errors.
We need to fix these errors.
