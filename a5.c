#include <stdio.h>

#include <string.h>

#include <ctype.h>

 

int main()

{

    char string[100], word[20], unit[20], c;

    int i = 0, k = 0, count = 0;

 

    printf("Enter string: ");

    i = 0;

    do

    {

        fflush(stdin);

        c = getchar();

        string[i++] = c;

 

    }
    while (c != '\n');

    string[i - 1] = '\0';

    printf("Enter the word you want to find: ");

    scanf("%s", word);

    for (i = 0; i < strlen(string); i++)

    {

        while (i < strlen(string) && !isspace(string[i]) && isalnum(string[i]))

        {

            unit[k++] = string[i++];

        }

        if (k != 0)

        {

            unit[k] = '\0';

            if (strcmp(unit, word) == 0)

            {

                count++;

            }

            k = 0;

        }

    }

 

    printf("The number of times the word '%s' found in '%s' is '%d'.\n", word, string, count);

}
