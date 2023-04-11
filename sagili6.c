#include <stdio.h>

int main() {
    int amount, notes;

    printf("Enter amount: ");
    scanf("%d", &amount);

    printf("Total number of notes:\n");

    notes = amount / 500;
    printf("500: %d\n", notes);
    amount = amount - notes * 500;

    notes = amount / 100;
    printf("100: %d\n", notes);
    amount = amount - notes * 100;

    notes = amount / 50;
    printf("50: %d\n", notes);
    amount = amount - notes * 50;

    notes = amount / 20;
    printf("20: %d\n", notes);
    amount = amount - notes * 20;

    notes = amount / 10;
    printf("10: %d\n", notes);
    amount = amount - notes * 10;

    notes = amount / 5;
    printf("5: %d\n", notes);
    amount = amount - notes * 5;

    notes = amount / 2;
    printf("2: %d\n", notes);
    amount = amount - notes * 2;

    notes = amount / 1;
    printf("1: %d\n", notes);

    return 0;
}
// output
Enter the amount: 575
Total number of notes:
500: 1
100: 0
50: 1
20: 1
10: 0
5: 1
2: 0
1: 0
