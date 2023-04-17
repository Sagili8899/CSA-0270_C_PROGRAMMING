#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int i, j, maxCount, count;
    char maxChar;

    printf("Enter a string : ");
    fgets(str, MAX_SIZE, stdin);

    int len = strlen(str);

    maxCount = 0;
    maxChar = ' ';

    for(i=0; i<len; i++)
    {
        count = 0;

        for(j=i+1; j<len; j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }

        if(count > maxCount)
        {
            maxCount = count;
            maxChar = str[i];
        }
    }

    printf("Max repeated character in the string = %c \n", maxChar);
    printf("It occurs %d times\n", maxCount+1);

    return 0;
}
// output
Enter a string : Welcome to Sanfoundry's C Programming Class !
Max repeated character in the string = o 
It occurs 4 times
