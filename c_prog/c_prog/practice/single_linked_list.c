#include <stdio.h>
#include <stdlib.h>

struct Node 
{
	int data;
	struct Node*next;
};


void insert_at_begining(int data, struct Node **head)
{
	struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
	newnode->data = data;
	newnode->next = NULL;

	if(newnode == NULL)
	{
		printf("memory allocation is failed\n");
		return;
	}
	
	if(*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
	}
	else
	{
		newnode->next = *head;
		*head = newnode;
	}
}

void print_list(struct Node *head)
{
	struct Node *temp = head;
	if(head == NULL)
	{
		printf("list is empty\n");
		return;
	}

	while(temp != NULL)
	{
		printf("%d ->", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");

}


int main()
{
	struct Node *head = NULL;
	for(int i=0; i<5; i++)
	{
		insert_at_begining(i*3, &head);
	}

	print_list(head);
		

}
