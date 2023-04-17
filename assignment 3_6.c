#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int i, j, len1, len2, found;

    printf("Enter first string: ");
    fgets(str1, MAX_SIZE, stdin);
    printf("Enter second string: ");
    fgets(str2, MAX_SIZE, stdin);

    len1 = strlen(str1) - 1; // ignore newline character
    len2 = strlen(str2) - 1; // ignore newline character

    if(len1 != len2)
    {
        printf("Strings are not anagrams.\n");
        return 0;
    }

    // Check if every character in str1 has a match in str2
    for(i=0; i<len1; i++)
    {
        found = 0;

        for(j=0; j<len2; j++)
        {
            if(str1[i] == str2[j])
            {
                found = 1;
                break;
            }
        }

        if(!found)
        {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    // Check if every character in str2 has a match in str1
    for(i=0; i<len2; i++)
    {
        found = 0;

        for(j=0; j<len1; j++)
        {
            if(str2[i] == str1[j])
            {
                found = 1;
                break;
            }
        }

        if(!found)
        {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");

    return 0;
}
//output
Enter first string: hectare
Enter second string: teacher
Strings are anagrams.
