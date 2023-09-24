#include "lists.h"
/**
 * add_node - adds a new node at the beg of a list_t
 * @head: first node of the old node* befor adding
 * @str: the string of the new node
 * Return: the address of a new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *h;

	h = malloc(sizeof(list_t));
	if (h == 0)
		return (0);
	h->str = strdup(str);
	h->len = strlen(str);
	h->next = *head;
	*head = h;
	return (*head);
}
