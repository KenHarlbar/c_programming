#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *insert(struct node *head, int x)
{
	struct node *temp = (struct node*) malloc (sizeof(struct node));
	temp->data = x;
	temp->next = NULL;
	if (head != NULL)
	{
		temp->next = head;
	}
	head = temp;
	return (head);
}
void print(struct node *head)
{
	printf("List is:");
	while (head != NULL)
	{
		printf(" %d", head->data);
		head = head->next;
	}
	printf("\n");
}
void printAddress(struct node *head)
{
	for (; head != NULL; head = head->next)
	{
		printf("Address of %d: %p\n", head->data, head);
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
		head = insert(head, x);
		print(head);
		printAddress(head);
	}
	return (0);
}
