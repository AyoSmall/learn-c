/*
    Elements of the same type stored in contiguous memory.

    - Contiguous memory locations
    - Each element has same size and type
    - index + (i * element_size)
    This code manipulates data in an array
    The plan is to replace the standard C language array with a custom implementation.
*/


#include <stdio.h>
#define CAPACITY 10

void array_init(int* head, int capacity, int to_push);
void array_print(int* head, int capacity);
int array_push(int* head, int* size, int capacity, int to_push);
int array_push_many(int* head, int* size, int capacity, int to_push, int to_push_amount);

int main(void)
{
    int array[CAPACITY + 1]; // CAPACITY elements and '\0'
    int array_size = 0;
    int array_push(int* head, int* size, int capacity, int to_push);

    // Initialise array contents
    array_init(array, CAPACITY, 0);

    // Print array contents
    array_print(array, CAPACITY);

    // Push values to array
    array_push(array, &array_size, CAPACITY, 69);

    // Print array contents
    array_print(array, CAPACITY);

    // Push multiple values to array
    array_push_many(array, &array_size, CAPACITY, 8, 9);

    // Print array contents
    array_print(array, CAPACITY);

    return 0;
}



void array_init(int* head, int capacity, int to_push)
{
    for (int i = 0; i < capacity; ++i)
    {
        *(head + i) = to_push; // access value at head+size and replace

    }
}

void array_print(int* head, int capacity)
{
    printf("\n\n");
    for (int i = 0; i < capacity; ++i)
    {
        printf("%d ", *(head + i));
    }
}

int array_push(int* head, int* size, int capacity, int to_push)
{

    if (*size >= capacity)
    {
        return 0;
    }

    *(head + *size) = to_push; // access value at head+size and replace
    *size += 1;               // value at address "size" is incremented


    return 1;
}

int array_push_many(int* head, int* size, int capacity, int to_push, int to_push_amount)
{
    int push_count = 0;

    if (capacity - *size < to_push_amount)
    {
        printf("\n\nPushed elements exceed available space");
        return 0;
    }

    while (push_count < to_push_amount)
    {
        // printf("\n\nEnter an integer: ");
        // scanf("%d", &to_push);
        array_push(head, size, capacity, to_push);
        push_count += 1;
    }

    return 1;
}
