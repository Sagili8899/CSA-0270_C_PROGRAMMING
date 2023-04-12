#include <stdio.h>

int main() {
    int array[] = {10, 15, 90, 200, 110};
    int n = sizeof(array) / sizeof(array[0]);
    int max_diff = 0, i, j;
    
    // find the maximum difference between two elements in the array
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            int diff = array[j] - array[i];
            if (diff > max_diff) {
                max_diff = diff;
            }
        }
    }
    
    // print the maximum difference
    printf("Maximum difference is %d\n", max_diff);
    
    return 0;
}
// output
Maximum difference is 190
