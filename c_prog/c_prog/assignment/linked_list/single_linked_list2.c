#include <stdio.h>
#include <stdlib.h>

struct Node 
{
	char data;
	struct Node *next;
};



void printList(struct Node *head)
{
	if(head == NULL)
	{
		printf("list is empty\n");
		return;
	}
	struct Node *temp = head;
	
	while(temp!=NULL)
	{
		printf(" %c->", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}
	
struct Node* createNode(char data)
{
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	if(newNode == NULL)
	{
		printf("memory allocation is failed\n");
		return NULL;
	}
	newNode -> data = data;
	newNode -> next = NULL;
	return newNode;
}

void insert_at_first(struct Node **head, char data)
{
	struct Node *newNode = createNode(data);
	struct Node *temp = *head;
	if(*head == NULL)
	{
		*head = newNode;
		return;
	}
	
	newNode->next = *head;
	*head = newNode;
}

void insert_at_end(struct Node **head, char data)
{
	struct Node *newNode = createNode(data);
	struct Node *temp = *head;
	if(*head == NULL)
	{
		*head = newNode;
		return;
	}
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	newNode -> next = NULL;
}
	

void insert_at_position(struct Node **head, char data, int pos)
{
	struct Node *newNode = createNode(data);
	struct Node *temp = *head;
	int count =0;
	if(*head == NULL)
	{
		*head = newNode;
		return;
	}
	while(temp != NULL && count < pos-1)
	{
		temp = temp->next;
		count++;
	}
	newNode->next = temp->next;
	temp->next = newNode;
}

void delete_at_first(struct Node **head)
{

	if(*head == NULL)
	{
		printf("list is empty\n");
		return;
	}
	struct Node *temp = *head;
	*head = temp->next;
	free(temp);
}

void delete_at_last(struct Node **head)
{

	if(*head == NULL)
	{
		printf("list is empty\n");
		return;
	}
	struct Node *temp = *head;
	if(temp->next == NULL)
	{
		free(temp);
		*head = NULL;
	}
	while(temp->next->next != NULL )
	{
		temp = temp->next;
	}
	free(temp->next);
	temp->next = NULL;
}


void delete_at_position(struct Node **head, int pos)
{
	if(*head == NULL)
	{
		printf("list is empty\n");
		return;
	}
	struct Node *temp = *head;
	int count = 0;
	while(temp != NULL && count < pos-1)
	{
		temp = temp->next;
		count++;
	}
	if(temp == NULL || temp->next == NULL)
	{
		printf("out of range\n");
		return;
	}
	
	struct Node *next_node = temp->next->next;
	free(temp->next);
	temp->next = next_node;
}
	

void main()
{
	struct Node *head = NULL;
	
	insert_at_first(&head, 'i');
	insert_at_first(&head, 'a');
	insert_at_first(&head, 's');
	insert_at_first(&head, 'b');
	printf("list elements\n");
	printList(head);

	insert_at_end(&head, 'i');
	printf("insert at end\n");
	printList(head);

	insert_at_position(&head, 'i', 3);
	printf("insert at position\n");
	printList(head);

	delete_at_first(&head);
	printf("delete first\n");
	printList(head);

	delete_at_last(&head);
	printf("delete last\n");
	printList(head);

	delete_at_position(&head, 3);
	printf("delete at position\n");
	printList(head);	
	
}
