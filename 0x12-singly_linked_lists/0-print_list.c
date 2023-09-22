#include "lists.h"
/**
 *print_list - function print all elements of list_t
 *@h: the input list chainne
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t numberofnodes = 0;
	const list_t *head;

	head = h;
	while (head != 0)
	{
	if (head->str == 0)
		printf("[0] (nil)\n");
	printf("[%d] %s\n", head->len, head->str);
	head = head->next;
	numberofnodes++;
	}
	return (numberofnodes);

}
