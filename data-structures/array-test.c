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
#include <array.c>
#define CAPACITY 10

void array_print(int* head, int capacity);
void array_init(int* head, int capacity, int to_push);
int array_push_back(int* head, int* size, int capacity, int to_push);
int array_push_back_many(int* head, int* size, int capacity, int to_push, int to_push_amount);

int main(void)
{
    int array[CAPACITY];
    int array_size = 0;
    // int array_push_back(int* head, int* size, int capacity, int to_push);

    // Initialise array contents
    array_init(array, CAPACITY, 0);

    // Print array contents
    array_print(array, CAPACITY);

    // Push values to array
    array_push_back(array, &array_size, CAPACITY, 69);

    // Print array contents
    array_print(array, CAPACITY);

    // Push multiple values to array
    array_push_back_many(array, &array_size, CAPACITY, 8, 9);

    // Print array contents
    array_print(array, CAPACITY);

    return 0;
}



void array_print(int* head, int size)
{
    printf("\n\n");
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", *(head + i));
    }
}

void array_init(int* head, int capacity, int to_push)
{
    for (int i = 0; i < capacity; ++i)
    {
        *(head + i) = to_push; // access value at head+size and replace

    }
}

int array_push_back(int* head, int* size, int capacity, int to_push)
{

    if (*size >= capacity)
    {
        return 0;
    }

    *(head + *size) = to_push; // access value at head+size and replace
    *size += 1;               // value at address "size" is incremented


    return 1;
}

// unused arguments to be struct members (remove if still unused)
int array_pop_back(int *head, int* size, int capacity)
{
    if (*size <= 0)
    {
        return 0;
    }

    *size -= 1; // removes popped from valid memory, but it still exists until overwritten
    return 1;
}

int array_push_back_many(int* head, int* size, int capacity, int to_push, int to_push_amount)
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
        array_push_back(head, size, capacity, to_push);
        push_count += 1;
    }

    return 1;
}
