#include <stdio.h>

int main() {
    int arr[100], n, i, temp, j;
    float avg, sum = 0;
    
    // get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    // get the elements of the array from the user
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // sort the array in descending order
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    // find the second largest and smallest elements
    int second_largest = arr[1];
    int second_smallest = arr[n-2];
    
    // calculate the average of the two elements
    sum = second_largest + second_smallest;
    avg = sum / 2;
    
    // check if the average is present in the array
    for (i = 0; i < n; i++) {
        if (arr[i] == avg) {
            printf("The average of the second largest and second smallest elements (%.2f) is present in the array.\n", avg);
            break;
        }
    }
    
    // if the average is not found, display an appropriate message
    if (i == n) {
        printf("The average of the second largest and second smallest elements (%.2f) is not present in the array.\n", avg);
    }
    
    return 0;
}
// output
Enter the size of the array: 6
Enter the elements of the array: 12 45 23 6 17 8
The average of the second largest and second smallest elements (14.50) is not present in the array.

