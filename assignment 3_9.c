#include <stdio.h>

int main()
{
    int arr1[10], arr2[10], *ptr1 = arr1, *ptr2 = arr2, i;

    printf("Enter array1 elements: ");
    for (i = 0; i < 10; i++)
        scanf("%d", ptr1++);

    ptr1 = arr1;

    for (i = 0; i < 10; i++)
        *(ptr2 + i) = *(ptr1 + i);

    printf("Array1: ");
    for (i = 0; i < 10; i++)
        printf("%d ", *(ptr1 + i));

    printf("\nArray2: ");
    for (i = 0; i < 10; i++)
        printf("%d ", *(ptr2 + i));

    return 0;
}
// output
Enter array1 elements: 10 -1 100 90 87 0 15 10 20 30
Array1: 10 -1 100 90 87 0 15 10 20 30
Array2: 10 -1 100 90 87 0 15 10 20 30
