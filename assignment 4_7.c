#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int roll_no;
    char stud_name[50];
    int mark1, mark2, mark3;
    int total_marks;
    float avg_marks;
};

int compare(const void *p, const void *q) {
    int a = ((struct student *)p)->total_marks;
    int b = ((struct student *)q)->total_marks;
    return (b - a);
}

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i+1);
        printf("Roll no: ");
        scanf("%d", &s[i].roll_no);
        printf("Name: ");
        scanf("%s", s[i].stud_name);
        printf("Marks in 3 subjects:\n");
        scanf("%d%d%d", &s[i].mark1, &s[i].mark2, &s[i].mark3);
        s[i].total_marks = s[i].mark1 + s[i].mark2 + s[i].mark3;
        s[i].avg_marks = (float)s[i].total_marks / 3.0;
    }

    qsort(s, n, sizeof(struct student), compare);

    printf("\nDetails of students in descending order of marks:\n");
    for (i = 0; i < n; i++) {
        printf("Roll no: %d, Name: %s, Total marks: %d, Average marks: %.2f\n", 
            s[i].roll_no, s[i].stud_name, s[i].total_marks, s[i].avg_marks);
    }

    return 0;
}
// output
Enter the number of students: 3

Enter details of student 1:
Roll no: 101
Name: Alice
Marks in 3 subjects:
80 85 90

Enter details of student 2:
Roll no: 102
Name: Bob
Marks in 3 subjects:
75 70 80

Enter details of student 3:
Roll no: 103
Name: Charlie
Marks in 3 subjects:
90 95 85

Details of students in descending order of marks:
Roll no: 103, Name: Charlie, Total marks: 270, Average marks: 90.00
Roll no: 101, Name: Alice, Total marks: 255, Average marks: 85.00
Roll no: 102, Name: Bob, Total marks: 225, Average marks: 75.00
