#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head;

/**
 * insert - add a node to the list
 *
 * @x: data of the node
 *
 * Return: nothing
 */
void insert(int x)
{
	struct node *temp = (struct node*) malloc (sizeof(struct node));
	temp->data = x;
	temp->next = head;
	head = temp;
}

/**
 * print - display all the items in the list
 *
 * Return: nothing
 */
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

/**
 * delete - remove a node from the list
 *
 * @n: position of node to be removed
 *
 * Return: nothing
 */
void delete(int n)
{
	struct node *temp1 = head;
	if (n == 1)
	{
		head = temp1->next;
		free(temp1);
		return;
	}
	for (int i = 0; i < n - 2; i++)
	{
		temp1 = temp1->next;
	}
	struct node *temp2 = temp1->next;
	temp1->next = temp2->next;
}

/**
 * main - call other functions with specific values
 * in appropriate places
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	head = NULL;
	insert(5);
	insert(10);
	insert(15);
	insert(20);
	print();
	int n;
	printf("Enter a position: ");
	scanf("%d", &n);
	delete(n);
	print();
	return (0);
}
