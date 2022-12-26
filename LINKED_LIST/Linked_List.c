#include <stdio.h>
#include "STD.h"
#include "Linked_List.h"
#include <stdlib.h>

u32 Length_u32List;
node Head;
void Add_Node(u32 val)
{
/* FIRST NODE */
if(Length_u32List == 0)
{
Head.value = val;
Head.next = null;
}

else {
node *last;

// 1- create new node
node* new = (node*)malloc(sizeof(node));

//2- Assign value, next
new->value = val;
new->next =null;

last =&Head;

/* Search for the last node */
while((last -> next) != null)
{
last = last->next;
}

last->next = new;
}

Length_u32List++;

}

}
void print_linkedlist(void)
{
if(Length_u32Node < 0)
{
node *last=&head;
int i =0;


//PRINT HEAD NODE 
printf("node num %d : %d ",i,last->value);


//PRINT ALL NODE
while((last->) != null)
{
i++;
last =last->next;

printf("node num %d : %d ",i,last->value);
}
else
{
	printf("E...M...P...T...Y");
}
}



}