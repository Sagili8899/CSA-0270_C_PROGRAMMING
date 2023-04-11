#include <stdio.h>

int main() {
    int decimalNum, binaryNum[20], i = 0, j;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
    
    // converting decimal to binary
    while(decimalNum > 0) {
        binaryNum[i] = decimalNum % 2;
        i++;
        decimalNum /= 2;
    }
    
    // printing binary number
    printf("Binary number: ");
    for(j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
        
    return 0;
}
// output
Enter decimal number: 112
Binary number: 01110000
