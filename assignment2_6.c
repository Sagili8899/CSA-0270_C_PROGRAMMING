#include <stdio.h>

int main() {
   int arr[10], even[10], odd[10], i, j = 0, k = 0, n;
   
   printf("Enter the number of elements: ");
   scanf("%d", &n);
   
   printf("Enter the elements of the array: ");
   for(i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }
   
   for(i = 0; i < n; i++) {
      if(arr[i] % 2 == 0) { // check if the element is even
         even[j] = arr[i]; // add the element to the even array
         j++;
      }
      else { // element is odd
         odd[k] = arr[i]; // add the element to the odd array
         k++;
      }
   }
   
   // display the even elements
   printf("\nEven elements of array: ");
   for(i = 0; i < j; i++) {
      printf("%d ", even[i]);
   }
   
   // display the odd elements
   printf("\nOdd elements of array: ");
   for(i = 0; i < k; i++) {
      printf("%d ", odd[i]);
   }
   
   return 0;
}
// output
Enter the number of elements: 6
Enter the elements of the array: 3 7 8 2 5 4

Even elements of array: 8 2 4
Odd elements of array: 3 7 5
