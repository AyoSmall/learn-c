// Array with two accessible dimensions
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int map[10][10] = {0};    // [layer][row][column] [z][y][x] [k][j][i]
    int pos = 0;

    // populating a 2d array
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            map[j][i] = pos;
            pos += 1;
        }
    }

    // printing a 2d array
    printf("Printing a 2d array:\n\n");

    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            if (map[j][i] < 10) printf("0");
            printf("%d ", map[j][i]);
        }
        printf("\n");
    }

    return 0;
}