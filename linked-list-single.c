// Blocks of related memory connected sequentially via link/pointer
// Blocks not necessarily contiguous
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int val = 0;
        struct node* next = NULL;
    };

    struct node* head = NULL;

    return 0;
}

// add at tail
void append()
{
    struct node* temp = (struct node*)malloc(sizeof(*temp));         // allocate memory and cast to struct node
    printf("Enter a value for node");
    scanf("%d", &temp->val);
    temp->next = NULL;

    if(obj->next == NULL)
    {
        
    }
}
// add at head
// delete from head
// delete given
// return node
// return length
// reverse list
// swap 2 nodes
// sort list