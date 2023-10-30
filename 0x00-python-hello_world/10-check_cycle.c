#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

/**
 * check_cycle - checks if a singly linked list has
 * a cycle in it
 * @list: pointer to the list
 * Return: 0 if there is no cycle,
 * Return: 1 if there is a cycle
 */
int check_cycle(listing_t *list)
{
	listing_t *slow = list, *fast = list;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return(1);
	}
	return(0);
}
