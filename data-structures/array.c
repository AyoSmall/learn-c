/*
    Implementation of an integer array

    TODO:
        - convert array struct/functions to dynamic array
        - finishing touches for portability as custom integer array type
*/

#pragma once
#include <stdlib.h>
#include <stdio.h>


/*
    Structure
*/
struct array_int_t
{
    int* data;      // pointer to memory address of array's first location
    size_t size;       // number of elements stored in array
    size_t capacity;   // number of elements that can be stored
};



/*
    Functions
*/

// Initialise an integer array (stack)
int array_init(struct array_int_t* array, size_t capacity)
{
    if (capacity == 0) return 0;

    int* temp = malloc(sizeof(*temp) * capacity);
    if (temp == NULL) return 0;

    array->data = temp;
    array->capacity = capacity;
    array->size = 0;

    return 1;
}

/*
    Destroy an integer array
        - free allocated memory in reverse order of allocation
*/
void array_destroy(struct array_int_t* array)
{
    free(array->data);

    array->data = NULL; // remove dangling pointer
    array->size = 0;
    array->capacity = 0;
}

// Copy an integer value to the final position, Increase the accessible memory of an integer array by 1
int array_push_back(struct array_int_t* array, int to_push)
{ 
    if (array->data == NULL) return 0;
    if (array->size >= array->capacity) return 0;

    *(array->data + array->size) = to_push;     // access value at head+size and replace
    array->size += 1;                           // value at address "size" is incremented

    return 1;
}

// Decrease the accessible memory of an integer array by 1 (data in the now inaccessible location still exists and may be overwritten)
int array_pop_back(struct array_int_t* array)
{
    if (array->data == NULL) return 0;

    if (array->size == 0)
    {
        return 0;
    }

    array->size -= 1; // removes popped from valid memory, but it still exists until overwritten
    return 1;
}

// Copy an integer value to the final position, Increase the accessible memory of an integer array by 1 (do n times)
int array_push_back_many(struct array_int_t* array, int to_push, size_t to_push_amount)
{
    if (array->data == NULL) return 0;

    if (array->capacity - array->size < to_push_amount)
    {
        printf("\n\nPushed elements exceed available space");
        return 0;
    }

    size_t push_count = 0;
    while (push_count < to_push_amount)
    {
        // printf("\n\nEnter an integer: ");
        // scanf("%d", &to_push);
        array_push_back(array, to_push);
        push_count += 1;
    }

    return 1;
}

// Print contents of an integer array to console
int array_print(struct array_int_t* array)
{
    if (array->data == NULL) return 0;

    printf("\n\nArray Contents: \n");
    for (size_t i = 0; i < array->size; ++i)
    {
        printf("%d ", *(array->data + i));
    }

    return 1;
}

// int array_grow(){}