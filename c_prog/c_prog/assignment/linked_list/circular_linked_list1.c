//without using functions.

#include <stdio.h>
#include <stdlib.h>

struct Node 
{
	int data;
	struct Node *next;
};

void main()
{
	struct Node *head;
	struct Node *first_node = NULL;
	struct Node *sec_node = NULL;
	struct Node *third_node = NULL;
	struct Node *four_node = NULL;
	
	first_node = (struct Node *)malloc(sizeof(struct Node));
	sec_node = (struct Node *)malloc(sizeof(struct Node));
	third_node = (struct Node *)malloc(sizeof(struct Node));
	four_node = (struct Node *)malloc(sizeof(struct Node));

	first_node ->data= 23;
	sec_node ->data= 3;
	third_node ->data= 2;
	four_node ->data= 32;

	head = first_node;

	first_node ->next = sec_node ;
	sec_node ->next = third_node ;
	third_node ->next = four_node ;	
	four_node -> next =first_node;
	
	struct Node *temp = head;
	
	while(temp !=NULL)
	{
		printf("%d->", temp->data);
		temp = temp->next;
		if(temp == head)
		{
			printf("back to head\n");
			return;
		}
	}
	
	printf("NULL\n");
	
}


	

	

