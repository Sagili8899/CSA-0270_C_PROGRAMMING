#include <stdio.h>
#include <string.h>

void reverse_string(char *);

int main()
{
    char str[100];

    printf("Enter any string :: ");
    gets(str);

    reverse_string(str);

    printf("The Reverse of the String [ %s ] is :: %s", str, strrev(str));

    return 0;
}

void reverse_string(char *str)
{
    int i, j;
    char temp;

    j = strlen(str) - 1;

    for (i = 0; i < j; i++, j--)
    {
        temp = *(str + i);
        *(str + i) = *(str + j);
        *(str + j) = temp;
    }
}
// output
Enter any string :: Saveetha
The Reverse of the String [ Saveetha ] is :: ahteevaS
