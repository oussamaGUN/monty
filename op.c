#include "monty.h"

void sub(stack_t **head, unsigned int count)
{
	stack_t *h;
	int len = 0, sum;

	h = *head;

	for (len = 0; h != NULL; len++)
		h = h->next;
	if (len < 2)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", count);
		exit(EXIT_FAILURE);
	}
	h = *head;
	sum = h->next->n - h->n;
	h->next->n = sum;
	*head = h->next;
	free(h);
}
