#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the numbers: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // sort the array in descending order
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The numbers arranged in descending order are given below:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
// output
Enter the value of N: 5
Enter the numbers:
234
780
130
56
90
The numbers arranged in descending order are given below:
780
234
130
90
56
