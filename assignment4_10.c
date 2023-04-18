#include <stdio.h>
#include <math.h>

union shape {
    float radius;
    struct {
        float length;
        float width;
    } rectangle;
};

int main() {
    union shape s;
    char choice;

    printf("Calculate area of a circle or rectangle (c/r)? ");
    scanf("%c", &choice);

    if (choice == 'c') {
        printf("Enter the radius of the circle: ");
        scanf("%f", &s.radius);

        float area = M_PI * s.radius * s.radius;
        printf("The area of the circle is: %.2f\n", area);
    } else if (choice == 'r') {
        printf("Enter the length of the rectangle: ");
        scanf("%f", &s.rectangle.length);

        printf("Enter the width of the rectangle: ");
        scanf("%f", &s.rectangle.width);

        float area = s.rectangle.length * s.rectangle.width;
        printf("The area of the rectangle is: %.2f\n", area);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
// output
    Enter 'c' for circle or 'r' for rectangle: c
Enter the radius of the circle: 5
Area of the circle = 78.500000

Enter 'c' for circle or 'r' for rectangle: r
Enter the length of the rectangle: 4.5
Enter the width of the rectangle: 3.2
Area of the rectangle = 14.400000

Enter 'c' for circle or 'r' for rectangle: t
Invalid choice
