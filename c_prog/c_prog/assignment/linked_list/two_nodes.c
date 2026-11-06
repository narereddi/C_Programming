#include <stdio.h>
#include <stdlib.h>

struct Node 
{
	int data;
	struct Node *link;
};
	
void main()
{
	struct Node *ptr = NULL;
	ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr -> data = 12;
	ptr -> link = NULL;
	
	struct Node *current = (struct Node *)malloc(sizeof(struct Node));
	current -> data = 21;
	current -> link = NULL;
	ptr -> link = current;
	
	printf("%d\n", ptr->data);
	printf("%d\n", current->data);
	
}
	
	


