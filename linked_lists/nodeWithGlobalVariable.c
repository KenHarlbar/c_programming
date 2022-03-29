#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head;

void insert(int x)
{
	struct node *temp = (struct node*) malloc (sizeof(struct node));
	temp->data = x;
	temp->next = head;
	head = temp;
}
void print()
{
	struct node *temp = head;
	printf("List is:");
	while (temp != NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void printAddress()
{
	struct node *temp = head;
	while (temp != NULL)
	{
		printf("Address of %d: %p\n", temp->data, temp);
		temp = temp->next;
	}
}
int main(void)
{
	head = NULL;
	int n, i, x;

	printf("Enter the number of integers: ");
	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		printf("Enter the integer: ");
		scanf("%d", &x);
		insert(x);
		print();
		printAddress();
		i++;
	}
}
