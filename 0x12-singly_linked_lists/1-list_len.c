#include "lists.h"
/**
 *list_len - function return the number of elements of list_t
 *@h: the input list chainne
 *Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t numberofnodes = 0;
	const list_t *head;

	head = h;
	while (head != 0)
	{
		head = head->next;
		numberofnodes++;
	}
	return (numberofnodes);
}
