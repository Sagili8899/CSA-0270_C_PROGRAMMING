#include <stdio.h>

int main() {
    int n, arr[100], max1 = -99999, max2 = -99999;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }
    printf("The first largest element is: %d\n", max1);
    printf("The second largest element is: %d\n", max2);
    return 0;
}
// output
Enter the number of elements in the array: 5
Enter the elements of the array: 2 4 5 8 7
The first largest element is: 8
The second largest element is: 7
// output
Enter the number of elements in the array: 6
Enter the elements of the array: 2 1 1 2 1 2
The first largest element is: 2
The second largest element is: 1
