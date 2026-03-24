#include <stdio.h>
#include <string.h>

int main()
{
    char word[10];
    int i,j;

    // Get word from user
    printf("Enter a word:\n");
    scanf("%s",&word);

    // Print triangle pattern
    i=0;
    while(i<strlen(word))
    {
        j=0;
        while(j<=i)
        printf("%c ",word[j]);
            j++;
        {
            printf("\n");
            i++;
        }
    }

    return 0;
}

