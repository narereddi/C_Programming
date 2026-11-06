#include <stdio.h>
#include <stdlib.h>


struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
};

void main()
{
	struct Node *head;
	
	struct Node *node1= NULL;
	struct Node *node2=NULL;
	struct Node *node3= NULL;
	struct Node *node4= NULL;
	

	node1 = (struct Node *) malloc(sizeof(struct Node));
	node2 = (struct Node *) malloc(sizeof(struct Node));
	node3 = (struct Node *) malloc(sizeof(struct Node));
	node4 = (struct Node *) malloc(sizeof(struct Node));

	node1 -> data = 12;
	node2 -> data = 1;
	node3 -> data = 2;
	node4 -> data = 123;
	
	head = node1;
	
	node1->prev = NULL;
	node1->next = node2;
	
	node2->prev = node1;
	node2->next = node3;
	
	node3->prev = node2;
	node3->next = node4;
	
	node4->prev = node3;
	node4->next=NULL;
	
	struct Node *temp1 = head;
	
	while(temp1 != NULL)
	{	
		printf("%d->", temp1->data);
		temp1=temp1->next;
	}
	struct Node *temp2= temp1;

	temp2= node4;
	printf("NULL\n");
	printf("\n");
	
	while(temp2 != NULL)
	{
		printf("%d->", temp2->data);
		temp2= temp2->prev;
	}
	printf("NULL\n");		
}



	

	


