#include <stdio.h>

int main() {
   int arr[100], freq[100];
   int n, i, j, count;

   printf("Enter the size of the array: ");
   scanf("%d", &n);

   printf("Enter %d elements in the array:\n", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
      freq[i] = -1;
   }

   for (i = 0; i < n; i++) {
      count = 1;
      for (j = i + 1; j < n; j++) {
         if (arr[i] == arr[j]) {
            count++;
            freq[j] = 0;
         }
      }
      if (freq[i] != 0) {
         freq[i] = count;
      }
   }

   printf("\nFrequency of each element in the array:\n");
   for (i = 0; i < n; i++) {
      if (freq[i] != 0) {
         printf("%d occurs %d times\n", arr[i], freq[i]);
      }
   }

   return 0;
}
// output
Enter the size of the array: 10
Enter 10 elements in the array:
1 2 3 2 2 1 3 4 5 5

Frequency of each element in the array:
1 occurs 2 times
2 occurs 3 times
3 occurs 2 times
4 occurs 1 times
5 occurs 2 times
