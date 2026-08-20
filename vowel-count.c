// Grouping variables of the same type with arrays
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr_string[10];                                                                                                    // indices 0-9, arr_string stores the memory address of the first element
    int vowels = 0;

    printf("Enter a word of no more than ten letters: ");
    scanf("%s", arr_string);                                                                                                // scan string to array with index arr_string
    
    // we can scan through an array using loops
    for (int i = 0; i < 10; ++i)
    {
        if (arr_string[i] == 'a' || arr_string[i] == 'e' || arr_string[i] == 'i' || arr_string[i] == 'o' || arr_string[i] == 'u')
        {
            printf("\nYou entered a vowel at array position %d", i);
            vowels += 1;
        }
    }

    printf("\n\nYour word was %s. It has %d vowels.\n\n", arr_string, vowels);

    return 0;
}