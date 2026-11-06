#include <stdlib.h>
#include <stdio.h>
#include "declare.h"
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
		return ;
	}
	
	struct Node *temp = *head;
	if(temp->next == NULL)
	{
		free(temp);
		*head = NULL;
		return;
	}
	while(temp->next->next != NULL)
	{
		temp = temp->next;
	}
	free(temp->next);
	temp->next = NULL;
}


void delete_at_position(struct Node **head, int data, int pos)
{
	int count=0;
	struct Node *temp = *head;
	if(pos == 0)
	{
		*head = temp->next;
		free(temp);
		return;
	}	
	while(temp != NULL && count <pos-1)
	{
		temp = temp->next;
		count++;
	}
	if(temp == NULL || temp->next == NULL)
	{
		printf("position out of range\n");
		return;
	}
	
	struct Node *temp1 = temp ->next->next;
	free(temp->next);
	temp->next =temp1;
	
	//temp-> next = temp->next->next;
}

