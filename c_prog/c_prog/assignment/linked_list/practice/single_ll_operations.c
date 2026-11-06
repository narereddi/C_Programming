#include <stdio.h>
#include <stdlib.h>

struct Node 
{
	int data;
	struct Node *next;
};


void PrintList(struct Node *head)
{
	if(head == NULL)
	{
		printf("list is empty\n");
		return;
	}
	
	struct Node *temp = head;
	while(temp != NULL)
	{
		printf("%d ->", temp->data);
		temp = temp->next;

	}
	printf("NULL\n");
}

struct Node* Create_Node(int data)
{
	struct Node *New_Node = (struct Node*)malloc(sizeof(struct Node));
	if(New_Node == NULL)
	{
		printf("memory allocation is failed\n");
		return NULL;
	}
	New_Node->data = data;
	New_Node->next = NULL;
	return New_Node;
}

void insert_at_first(struct Node **head, int data)
{
	struct Node *New_Node = (struct Node*)Create_Node(data);
	if(*head == NULL)
	{
		*head = New_Node;
		return;
	}
	New_Node->next = *head;
	*head = New_Node;
}
/*
void insert_at_end(struct Node **head, int data)
{
	struct Node *New_Node = 
*/	
void main()
{
	struct Node *head = NULL;
	insert_at_first(&head, 12);
	PrintList(head);
}
