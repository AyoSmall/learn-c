/*
    Implementation of an integer array
    TODO:
        - edit push/pop functions to accept address of array structure as parameter
        - write a test program which utilises custom array
*/

#include <stdlib.h>


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
void array_init(struct array_int_t* array, size_t capacity)
{
    array->size = 0;
    array->capacity = capacity;
    array->data = malloc(sizeof(*array->data) * array->capacity);
}

// // Copy an integer value to the final position, Increase the accessible memory of an integer array by 1
// int array_push_back(int* head, int* size, int capacity, int to_push)
// {

//     if (*size >= capacity)
//     {
//         return 0;
//     }

//     *(head + *size) = to_push; // access value at head+size and replace
//     *size += 1;               // value at address "size" is incremented


//     return 1;
// }

// // unused arguments to be struct members (remove if still unused)
// // Decrease the accessible memory of an integer array by 1 (data in the now inaccessible location still exists and may be overwritten)
// int array_pop_back(int *head, int* size, int capacity)
// {
//     if (*size <= 0)
//     {
//         return 0;
//     }

//     *size -= 1; // removes popped from valid memory, but it still exists until overwritten
//     return 1;
// }

// // Copy an integer value to the final position, Increase the accessible memory of an integer array by 1 (do n times)
// int array_push_back_many(int* head, int* size, int capacity, int to_push, int to_push_amount)
// {
//     int push_count = 0;

//     if (capacity - *size < to_push_amount)
//     {
//         printf("\n\nPushed elements exceed available space");
//         return 0;
//     }

//     while (push_count < to_push_amount)
//     {
//         // printf("\n\nEnter an integer: ");
//         // scanf("%d", &to_push);
//         array_push_back(head, size, capacity, to_push);
//         push_count += 1;
//     }

//     return 1;
// }
