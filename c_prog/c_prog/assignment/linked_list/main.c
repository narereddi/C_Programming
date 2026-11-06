#include <stdio.h>
#include <stdlib.h>
#include "declare.h"


/*
struct Node 
{
	int data;
	struct Node* next;
};
*/

void printlist( struct Node *head)
{
	struct Node *temp = head;
	
	if(temp == NULL)
	{
		printf("list is empty\n");
		
	}
	while(temp != NULL)
	{
		printf("%d ->", temp-> data);
		temp = temp-> next;
	}
	printf("NULL\n");
}


/*
struct Node* createNode(int data)
{
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	if (newNode == NULL)
	{
		printf("memory allocation is failed\n");
		return NULL;
	}
	newNode-> data = data;
	newNode-> next = NULL;
	
	return newNode;
}




void insert_at_first(struct Node **head, int data)
{
	struct Node * newNode = createNode(data);
	newNode-> next = *head;
	*head = newNode;
}
*/		

void main()
{
	struct Node *head = NULL;
	int i;
	printf("insert at begining\n");
	for(i=0; i<5; i++)
	{
		insert_at_first(&head, i +5);
	}
	printlist(head);

	printf("insert at end\n");
	insert_at_end(&head, 12);
	printlist(head);

	insert_at_position(&head, 77, 0);
	printf("insert at 0 position\n");
	printlist(head);

	delete_at_first(&head);
	printf("delete at begining\n");
	printlist(head);
	
	delete_at_last(&head);
	printf("delete at last\n");
	printlist(head);

	delete_at_position(&head, 33, 1);
	printf("delete at position\n");
	printlist(head);


}
