#include <stdio.h>

int gcd(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    } else {
        return gcd(num2, num1 % num2);
    }
}

int lcm(int num1, int num2) {
    return (num1 * num2) / gcd(num1, num2);
}

int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int result = lcm(num1, num2);
    printf("LCM of %d and %d is %d.\n", num1, num2, result);

    return 0;
}
// output 
Enter two positive integers: 10 15
LCM of 10 and 15 is 30.
