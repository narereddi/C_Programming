#include <stdio.h>
#include <stdlib.h>
//#include "insert2.h"

struct Node 
{
	int data;
	struct Node *next;
};




void insert_at_first(struct Node **head, int data, int n)
{
	int count=0;

	//struct Node *temp = *head;
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	if(newNode == NULL)
	{
		printf("memory allocation is failed\n");
		return;
	}
	newNode -> data = data;
	newNode -> next = *head;
	*head = newNode;

	struct Node *temp = *head;
	
	while(temp != NULL)
	{
		if(count == n-1)
		{
			printf("%d ->", temp->data);
		}
		temp = temp->next;
		count++;
	}
	
	
}
/*	
void printlist(struct Node *head)
{
	struct Node *temp = head;
	while(temp != NULL)
	{
		printf("%d ->", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}
*/
void main()
{
	struct Node *head = NULL;
	//printf("enter the data of node\n");
	//scanf("%d", &data);

	int i, data, n;
 	printf("How many nodes do you want to insert? ");
   	 scanf("%d", &n);
	printf("enter the data members\n");
	for(i=0; i<n; i++)
	{
        	scanf("%d", &data);
		insert_at_first(&head, data, n);
	}
	//printlist(head);
}

