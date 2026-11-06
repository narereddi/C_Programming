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
	
	ptr = (struct Node *)malloc (sizeof(struct Node));
	ptr -> data = 231;
	ptr -> link = NULL;
	
	printf("%d\n", ptr -> data);
}
