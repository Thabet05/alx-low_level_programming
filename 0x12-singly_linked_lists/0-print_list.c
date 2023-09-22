#include "lists.h"
/**
 *
 */
size_t print_list(const list_t *h)
{
	size_t numberofnodes;
	const list_t *head;

	head = h;
	if (head->str == 0)
		printf("[0] (nil)\n");
	printf("[%d] (%s)\n", head->len, head->str);
	head = head->next;
	numberofnodes++;

}
