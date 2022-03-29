#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
void insert(struct node **head, int x)
{
	struct node *temp = (struct node*) malloc (sizeof(struct node));
	temp->data = x;
	temp->next = NULL;
	if (*head != NULL)
	{
		temp->next = *head;
	}
	*head = temp;
}
void print(struct node **head)
{
	struct node *temp = *head;
	printf("List is:");
	while (temp != NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void printAddress(struct node **head)
{
	struct node *temp = *head;
	while (temp != NULL)
	{
		printf("Address of %d: %p\n", temp->data, temp);
		temp = temp->next;
	}
}
int main(void)
{
	struct node *head = NULL;
	int n, i, x;

	printf("Enter the number of integers: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter the number: ");
		scanf("%d", &x);
		insert(&head, x);
		print(&head);
		printAddress(&head);
	}
	return (0);
}
