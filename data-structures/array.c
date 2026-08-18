/*
    Implementation of an integer array
    TODO:
        - create destructor function (free memory in reverse order of allocation/creation)
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

// Print contents of an integer array to console
void array_print(struct array_int_t* array)
{
    printf("\n\nArray Contents: \n");
    for (size_t i = 0; i < array->size; ++i)
    {
        printf("%d ", *(array->data + i));
    }
}

// Initialise an integer array 
int array_init(struct array_int_t* array, size_t capacity)
{
    if (capacity <= 0) return 0;
    array->capacity = capacity;
    
    array->data = malloc(sizeof(*array->data) * array->capacity);
    if (array->data == NULL) return 0;

    array->size = 0;

    return 1;
}

// Copy an integer value to the final position, Increase the accessible memory of an integer array by 1
int array_push_back(struct array_int_t* array, int to_push)
{
    // if (*array.size >= *array.capacity)
    if (array->size >= array->capacity)
    {
        return 0;
    }

    *(array->data + array->size) = to_push; // access value at head+size and replace
    array->size += 1;                             // value at address "size" is incremented

    return 1;
}

// Decrease the accessible memory of an integer array by 1 (data in the now inaccessible location still exists and may be overwritten)
int array_pop_back(struct array_int_t* array)
{
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
