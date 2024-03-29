#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
/*int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    insert_nodeint_at_index(&head, 0, 4096);
    insert_nodeint_at_index(&head, 3, 4096);
    insert_nodeint_at_index(&head, 6, 4096);
    insert_nodeint_at_index(&head, 10, 4096);
    insert_nodeint_at_index(&head, 11, 40);
    print_listint(head);
    free_listint2(&head);
    return (0);
}*/

int main(void)
{
	listint_t *head;
	listint_t *n;

	head = NULL;
	n = insert_nodeint_at_index(&head, 0, 98);
	if (n)
		printf("-> %d\n", n->n);
	else
		printf("(nil)\n");
	print_listint(head);
	return (0);
}
