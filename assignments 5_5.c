#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NUM_LETTERS 26

int main() {
    FILE *input_file;
    FILE *output_file;
    char filename[256];
    char line[1024];
    int letter_counts[NUM_LETTERS] = {0};
    int i, c;

    // Open the input file for reading
    printf("Enter the name of the input file: ");
    fgets(filename, 256, stdin);
    filename[strcspn(filename, "\n")] = '\0';
    input_file = fopen(filename, "r");
    if (input_file == NULL) {
        printf("Error opening input file\n");
        return 1;
    }

    // Count the number of occurrences of each letter of the alphabet in the file
    while (fgets(line, 1024, input_file) != NULL) {
        for (i = 0; line[i] != '\0'; i++) {
            c = tolower(line[i]);
            if (isalpha(c)) {
                letter_counts[c - 'a']++;
            }
        }
    }

    // Open the output file for writing
    output_file = fopen("statistics.txt", "w");
    if (output_file == NULL) {
        printf("Error opening output file\n");
        return 1;
    }

    // Write the letter counts to the output file
    for (i = 0; i < NUM_LETTERS; i++) {
        fprintf(output_file, "%c: %d\n", 'a' + i, letter_counts[i]);
    }

    // Close the input and output files
    fclose(input_file);
    fclose(output_file);

    return 0;
}
// output
a: 1
b: 0
c: 0
d: 0
e: 1
f: 1
g: 0
h: 0
i: 2
j: 0
k: 0
l: 1
m: 0
n: 0
o: 0
p: 0
q: 0
r: 0
s: 3
t: 3
u: 0
v: 0
w: 0
x: 0
y: 0
z: 0
