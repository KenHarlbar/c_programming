#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prompt the user for the number of items
 * to be in the list
 * insert - input the value of x into the node
 * print - display all the data entered
 *
 * @head: pointer variable to the beginning of node
 * it is made global so that it can be
 * accessed anywhere in the program
 * @x: variable for each items
 * @n: variable for the number of items
 * @i: variable for looping
 *
 * Return: Always 0 (Success)
 */
struct node
{
	int data;
	struct node* next;
};
struct node *head;

void insert (int x)
{
	/* Define the size of the node */
	struct node *temp = (struct node*) malloc (sizeof(struct node));
	temp->data = x;
	temp->next = head;
	head = temp;
}
void print()
{
	struct node *temp = head;
	printf("List is: ");
	while (temp != NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
int main(void)
{
	head = NULL;
	int n, i, x;

	printf("Enter the number of integer: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter the integer: ");
		scanf("%d", &x);
		insert(x);
		print();
	}
	return (0);
}
