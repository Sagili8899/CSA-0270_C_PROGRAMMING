#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int left, int right) {
    if (left == right) {
        printf("%s\n", str);
    } else {
        for (int i = left; i <= right; i++) {
            swap((str + left), (str + i));
            permute(str, left + 1, right);
            swap((str + left), (str + i));
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    // Remove newline character from the input string
    str[strcspn(str, "\n")] = '\0';

    printf("All possible permutations are:\n");
    permute(str, 0, strlen(str) - 1);

    return 0;
}
// output
    Enter a string: SAN
All possible permutations are:
SAN
SNA
ASN
ANS
NSA
NAS
