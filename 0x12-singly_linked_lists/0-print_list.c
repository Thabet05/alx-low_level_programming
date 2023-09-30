#include "lists.h"
/**
<<<<<<< HEAD
 * print_list - function that prints all the elements of a list_t list
 * @str: a pointer to a string
 * @len: size of the string
 * @next: a pointer to the next element
 * Return: 0
 */
size_t print_list(const list_t *h)
{
	typedef struct list_s
	{
		char *str;
		unsigned int len;
		struct list_s *next;
	} list_t;
	if (str == 0)
		printf("0");
=======
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
	else
	{
	printf("[%d] %s\n", head->len, head->str);
	}
	head = head->next;
	numberofnodes++;
	}
	return (numberofnodes);
>>>>>>> refs/remotes/origin/master

}
