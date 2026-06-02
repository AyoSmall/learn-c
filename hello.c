#include <stdio.h>

void check_best_num(int *x, int best);

int main()
{
    int num = 0;
    int best_num = 8;

    printf("Hello!\n\n");
    printf("Please enter a number: ");
    scanf("%d", &num);
    printf("You entered %d. Double that is %d.\n\n", num, num*2);

        check_best_num(&num, best_num);

    getchar();
    return 0;
}

void check_best_num(int *x, int best)
{
    while (*x != best)
    {
            printf("You chose a good num... but not the best num.\n");
            printf("Try again..: ");
            scanf("%d", x);
    }

    printf("YES! %d!\nThat's the best num...\n", *x);
}

// int *x;                              declare variable of type pointer-to-int
// *x                                   the value stored at the memory address
// int *x = malloc(sizeof(*x));         initialise with free memory of size int
// free(x);                             return memory to the OS (NB please set to null)

// int val;     declare variable of type int
// &val         memory address of variable val
