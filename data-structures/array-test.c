/*
    Elements of the same type stored in contiguous memory.

    - Contiguous memory locations
    - Each element has same size and type
    - index + (i * element_size)
    This code manipulates data in an array
    The plan is to replace the standard C language array with a custom implementation.

    TODO:
        - create custom array struct
        - edit functions to work with struct
        - edit main to test array
        - convert array struct/functions to dynamic array
        - finishing touches for portability as custom integer array type
*/


#include <stdio.h>
#include "array.c"
#define CAPACITY 10

int main(void)
{
    // int array[CAPACITY];
    // int array_size = 0;
    struct array_int_t array;

    // Initialise array contents
    array_init(&array, CAPACITY);

    // Print array contents
    array_print(&array);

    // // Push values to array
    // array_push_back(array, &array_size, CAPACITY, 69);

    // // Print array contents
    // array_print(array, CAPACITY);

    // // Push multiple values to array
    // array_push_back_many(array, &array_size, CAPACITY, 8, 9);

    // // Print array contents
    // array_print(array, CAPACITY);

    return 0;
}
