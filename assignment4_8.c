#include <stdio.h>

union data {
    int i;
    float f;
};

int main() {
    union data d;

    printf("Enter a value (integer or float): ");
    if (scanf("%d", &d.i) == 1) {
        printf("You entered an integer: %d\n", d.i);
    }
    else if (scanf("%f", &d.f) == 1) {
        printf("You entered a float: %.2f\n", d.f);
    }
    else {
        printf("Invalid input.\n");
    }

    return 0;
}
// output
Enter a value (integer or float): 42
You entered an integer: 42
