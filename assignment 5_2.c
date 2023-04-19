#include <stdio.h>

typedef struct {
    int id;
    char name[20];
    float score;
} Student;

int main() {
    FILE *file;
    Student student;

    // Open the binary file for reading
    file = fopen("data.bin", "rb");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Read and print each student's data
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        printf("ID: %d\n", student.id);
        printf("Name: %s\n", student.name);
        printf("Score: %.2f\n", student.score);
        printf("\n");
    }

    // Close the file
    fclose(file);

    return 0;
}
// output
ID: 1
Name: Alice
Score: 85.00

ID: 2
Name: Bob
Score: 72.50

ID: 3
Name: Charlie
Score: 93.25
