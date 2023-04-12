#include <stdio.h>
#include <limits.h>

int minJumps(int arr[], int n);

int main() {
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int minJumpsCount = minJumps(arr, n);
    if (minJumpsCount == INT_MAX) {
        printf("The end is not reachable.\n");
    } else {
        printf("Minimum number of jumps to reach the end: %d\n", minJumpsCount);
    }
    return 0;
}

int minJumps(int arr[], int n) {
    int jumps[n];
    int i, j;
    if (n == 0 || arr[0] == 0) {
        return INT_MAX;
    }
    jumps[0] = 0;
    for (i = 1; i < n; i++) {
        jumps[i] = INT_MAX;
        for (j = 0; j < i; j++) {
            if (i <= j + arr[j] && jumps[j] != INT_MAX) {
                jumps[i] = jumps[j] + 1;
                break;
            }
        }
    }
    return jumps[n-1];
}// output
Minimum number of jumps to reach the end: 3

