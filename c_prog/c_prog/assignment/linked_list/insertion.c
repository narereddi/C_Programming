#include <stdlib.h>
#include <stdio.h>
#include "declare.h"


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
	if(*head == NULL)
	{
		*head = newNode;
		return;
	}

	newNode-> next = *head;
	*head = newNode;
}

void insert_at_end(struct Node **head, int data)
{
	struct Node *newNode = createNode(data);
	if(*head == NULL)
	{
		*head = newNode;
		return;
	}
	struct Node *temp = *head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp -> next = newNode;
	//newNode -> data = data;
	newNode -> next = NULL;
}

void insert_at_position(struct Node **head, int data, int pos)
{

	int count =0;
	struct Node *newNode = createNode(data);
	struct Node *temp = *head;
	if(pos == 0)
	{
		*head = newNode;
		newNode->next = temp->next;
		return;
	}
	while(temp != NULL && count < pos -1)
	{
		temp = temp-> next;
		count++;
	}
	newNode -> next = temp ->next;
	temp-> next = newNode;
}
	
