// C style strings are arrays of characters, terminated by null
#include <stdio.h>
#include <string.h>

int main()
{
    printf("This is a string literal\n");
    printf("Enter 2 strings max=10 into standard input: \n");

    char str1[11];                                          // 10 characters + '\0'
    char str2[11];
    fgets(str1, 11, stdin);                                 // unlike scanf, considers size of the string and doesn't terminate at whitespace
    fgets(str2, 11, stdin);                                 // unlike scanf, considers size of the string and doesn't terminate at whitespace
    printf("YOUR STRINGS:  %s    %s\n\n", str1, str2);      // print cahr array beginning at address str

    // some string.h functions
    printf("Using strcmp() function:\n");
    if (!strcmp(str1, str2))
    {
        printf("Strings are equivalent!\n\n");
    }
    else
    {
        printf("Strings are different!\n\n");
    }

    printf("Using strcat() function (no \\n removal):\n");
    printf("%s", strncat(str1, str2, 10));

    return 0;
}