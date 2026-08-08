/*
    Implementation of an integer array
    TODO:
        - edit functions to accept address of array structure as parameter
        - write a test program which utilises custom array
*/




/*
    Structure
*/
struct array_int
{
    int* data;      // pointer to memory address of array's first location
    size_t size;       // marks the range of accessible locations of the array
    size_t capacity;   // all memory currently allocated to the array
};



/*
    Functions
*/

// Print contents of an integer array to console
void array_print(int* head, int size)
{
    printf("\n\n");
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", *(head + i));
    }
}

// Initialise an integer array (currently that means populating with 0)
void array_init(int* head, int capacity, int to_push)
{
    for (int i = 0; i < capacity; ++i)
    {
        *(head + i) = to_push; // access value at head+size and replace

    }
}

// Copy an integer value to the final position, Increase the accessible memory of an integer array by 1
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
// Decrease the accessible memory of an integer array by 1 (data in the now inaccessible location still exists and may be overwritten)
int array_pop_back(int *head, int* size, int capacity)
{
    if (*size <= 0)
    {
        return 0;
    }

    *size -= 1; // removes popped from valid memory, but it still exists until overwritten
    return 1;
}

// Copy an integer value to the final position, Increase the accessible memory of an integer array by 1 (do n times)
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
