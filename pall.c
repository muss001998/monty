#include "monty.h"
/**
 * f_pall - this will print the stack
 * @head: this is the stack head
 * @counter:to show no used
 * Return:to show no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
