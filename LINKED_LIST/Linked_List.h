#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_


typedef struct Node_type node;

struct Node_type
{
u32 value;
node *next;
};

void Add_node(u32);
void print_linkedlist(void);


#endif

