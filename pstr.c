#include "monty.h"
/**
 * f_pstr - this wil always print the string starting at the top of the stack,
 * followed by a new
 * @head: this is the stack head
 * @counter: reps the line_number
 * Return: this will have no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
