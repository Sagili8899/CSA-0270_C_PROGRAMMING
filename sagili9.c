#include <stdio.h>

int main() {
    int num, reversed_num = 0, remainder;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
    }

    printf("Reverse of %d = %d", num, reversed_num);
    return 0;
}
// output
Enter a number: 12345
Reverse of 12345 = 54321
