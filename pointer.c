// Simple use of pointers
#include <stdio.h>
#include <stdlib.h>

void print_ptr(int* p);

int main()
{
    int* ptr = malloc(sizeof(*ptr));                                // declare pointer-to-int ptr
    int num1;
    int num2;

    printf("num1 = ");
    scanf("%d", &num1);                                              // scan an integer to address of num
    printf("num2 = ");
    scanf("%d", &num2);                                              // scan an integer to address of num

    while(num2 == num1)
    {
        printf("Choose a different num2...");
        printf("num2 = ");
        scanf("%d", &num2);
    }

    printf("\n\nPrinting num1... num2...\n");
    printf("So num1 = %d... and num2 = %d\n", num1, num2);
    printf("The pointer can find them!");

    ptr = &num1;                                                     // ptr now points to address of num
    print_ptr(ptr);
    ptr = &num2;                                                     // ptr now points to address of num
    print_ptr(ptr);

    /*
    free(ptr);                                                       // deallocate memory
    ptr = 0;                                                         // set to null. avoid dangling.
    */

    return 0;
}

// print where ptr is pointing 
void print_ptr(int* p)
{
    printf("\n\nPrinting ptr...\n");
    printf("ptr -> num = %d\n\n", *p);
}