#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5, 4, 2, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, k;
    
    // loop through each element of the array
    for (i = 0; i < n; i++) {
        // check if the current element is a duplicate
        for (j = i + 1; j < n; ) {
            if (arr[j] == arr[i]) {
                // if it is a duplicate, remove it by shifting all the elements to the left
                for (k = j; k < n; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }
    
    // print the resultant array after removing duplicates
    printf("Resultant Array after removing duplicates: ");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(",");
        }
    }
    
    return 0;
}
// output
Resultant Array after removing duplicates: 1,2,4,5,7
