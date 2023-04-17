#include <stdio.h>

int main() {
    char str[100];
    int sum = 0;

    printf("Enter the string : ");
    fgets(str, 100, stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        sum += (int)str[i];
    }

    printf("Sum of all characters : %d", sum);
    return 0;
}
// output
Enter the string : Welcome to Sanfoundry's C Programming Class, Welcome Again to C Class !
Sum of all characters : 6307
