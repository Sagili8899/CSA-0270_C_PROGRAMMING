#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n], rev[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // reversing the array
    for(i = 0; i < n; i++) {
        rev[i] = arr[n-i-1];
    }

    // checking if the reversed array is equal to the original array
    int palindrome = 1;
    for(i = 0; i < n; i++) {
        if(arr[i] != rev[i]) {
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 1) {
        printf("The array is a palindrome\n");
    } else {
        printf("The array is not a palindrome\n");
    }

    return 0;
}
// output
Enter the size of the array: 5
Enter the elements of the array: 1 2 3 2 1
The array is a palindrome
