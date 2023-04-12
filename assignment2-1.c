#include <stdio.h>

int main() {
   int arr[5] = {12, 56, 34, 78, 100};
   int largest = arr[0]; // initialize largest to the first element of the array

   // loop through the array and update largest if we find a larger value
   for (int i = 1; i < 5; i++) {
      if (arr[i] > largest) {
         largest = arr[i];
      }
   }

   printf("The largest element in the array is: %d", largest);

   return 0;
}
// output
The largest element in the array is: 100
