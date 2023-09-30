#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: first node of the old node* befor adding
 * @str: the string of the new node
 * Return: the address of a new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h, *k;

	h = malloc(sizeof(list_t));
	if (h == 0)
		return (0);
	h->str = strdup(str);
	h->len = strlen(str);
	if (*head == 0)
	{
		*head = h;
		return (*head);
	}
	k = *head;
	while (k->next != 0)
	{
		k = k->next;
	}
	k->next = h;
	return (*head);
}
