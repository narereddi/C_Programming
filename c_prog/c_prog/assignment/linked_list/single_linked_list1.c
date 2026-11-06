#include <stdio.h>
#include <stdlib.h>

struct Node 
{
	int data;
	struct Node *next;
};

void printList(struct Node *head)
{
	if(head == NULL)
	{
		printf("list is empty\n");
	}
	
	struct Node *temp = head;
	while(temp != NULL)
	{	
		printf("%d ->", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}







/*----------------------------------------------------------------------------*/



void insert_at_first(struct Node **head, int data)
{
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	if(newNode == NULL)
	{
		printf("memory allocation is failed\n");
		return;
	}
	newNode ->data = data;
	newNode -> next = *head;
	*head = newNode;
}






/*----------------------------------------------------------------------------*/




void insert_at_position(struct Node **head, int data, int pos)
{
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	int count=0;

	if(newNode == NULL)
	{
		printf("memory allocation is failed\n");
		return;
	}

	newNode ->data = data;
	if(pos == 0)
	{	
		newNode -> next = *head;
		*head = newNode;
		return;
	}
	struct Node *temp = *head;
	while(temp != NULL && count <pos-1)
	{
		temp = temp->next;
		count++;
	}
	//newNode ->data = data;
	newNode ->next = temp->next;
	temp->next= newNode;
		
}




/*----------------------------------------------------------------------------*/





void insert_at_end(struct Node ** head, int data)
{
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	if(newNode == NULL)
	{
		printf("memory allocation is failed\n");
		return;
	}
	newNode -> data = data;
	if(*head == NULL)
	{
		*head = newNode;
		newNode ->next = NULL;
		return;
	}

	struct Node *temp = *head;	
	while(temp -> next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	newNode ->next = NULL;
}





/*----------------------------------------------------------------------------*/




void delete_from_first(struct Node **head)
{
	if(*head == NULL)
	{
		printf("list is empty\n");
		return;
	}
	struct Node *temp = *head;
	*head = temp -> next;
	free(temp);
}






/*----------------------------------------------------------------------------*/





void delete_from_position(struct Node **head, int pos)
{
	if(*head == NULL)
	{
		printf("list is empty\n");
		return;
	}
	struct Node *temp = *head;
	int count =0;
	
	if(pos == 0)
	{
		*head = temp->next;
		free(temp);
		return;
	}
	while(temp != NULL && count < pos-1)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL || temp->next == NULL)
   	 {
      	  printf("Position out of range\n");
      	  return;
   	 }
	
	struct Node *next = temp->next->next;
	free(temp->next);
	temp->next= next;
	//temp->next = temp->next->next;
	
}





/*----------------------------------------------------------------------------*/






void delete_from_end(struct Node **head)
{
	
	if(*head == NULL)
	{
		printf("list is empty\n");
		return;
	}
	struct Node *temp = *head;
	if(temp-> next == NULL)
	{
		free(temp);
		*head = NULL;
	}
	while(temp->next->next != NULL)
	{
		temp = temp->next;
	}
	
	free(temp->next);
	temp->next = NULL;

}





/*----------------------------------------------------------------------------*/



		
void main()
{
	struct Node *head = NULL;
	int n, i, insert_first, pos_data, insert_pos, insert_end, pos_delete;
	printf("enter the no of nodes to be taken\n");
	scanf("%d", &n);
	
	printf("enter the %d node data values\n", n);
	for(i=0; i<n; i++)
	{		
		scanf("%d", &insert_first);
		insert_at_first(&head, insert_first);
	}
	printf("list elements after inserting nodes\n");
	printList(head);
	
/*
	//printList(head);
	insert_at_first(&head, 12);
	//printList(head);
	insert_at_first(&head, 14);
	//printList(head);
	insert_at_first(&head, 22);
	printf("insert at beginning\n");
	printList(head);
*/
	printf("enter the data and position to be inserted\n");
	scanf("%d%d",&pos_data, &insert_pos);
	insert_at_position(&head,pos_data, insert_pos);
	printf("insert at position\n");	
	printList(head);

	printf("enter the data to insert at end of list\n");
	scanf("%d",&insert_end);
	insert_at_end(&head, insert_end);
	printf("insert at end\n");	
	printList(head);


	delete_from_first(&head);
	printf("delete from first\n");	
	printList(head);


	printf("enter the position of node to delete\n");
	scanf("%d",&pos_delete);
	delete_from_position(&head, pos_delete);
	printf("delete from position\n");	
	printList(head);


	delete_from_end(&head);
	printf("delete from end\n");	
	printList(head);

}
