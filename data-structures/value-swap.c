// This code uses pointers to rotate the values of 3 variables.

#include <stdlib.h>
#include <stdio.h>

void rotate(int* first, int* middle, int* last);

int main()
{
    // initialise
    int a = 0;
    int b = 0;
    int c = 0;
    int rotate_num = 0;

    // assign values to a, b, c
    a = 7;
    b = 8;
    c = 9;

    printf("a = %d, b = %d, c = %d. How many rotations?    ", a, b, c);
    scanf("%d", &rotate_num);
    printf("\n");

    // swap values
    for (int i = 0; i < rotate_num; ++i)
    {
        rotate(&a, &b, &c);
        printf("%d %d %d\n", a, b, c);
    }

    return 0;
}

void rotate(int* first, int* middle, int* last)
{
    int temp = *last;
    *last = *middle;
    *middle = *first;
    *first = temp;
}