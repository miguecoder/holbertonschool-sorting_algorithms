#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort
 * algorithm
 * @list: array of integers
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head = NULL;
	listint_t *current = NULL;
	listint_t *temp = NULL;

	if (!list || (*list)->next == NULL)
	{
		return;
	}

	current = (*list)->next;

	while (current)
	{
		temp = current->next;
		head = current->prev;
		while (head && current->n < head->n)
		{
			if (head->prev)
			{
				head->prev->next = current;
			}
			head->next = current->next;
			current->next = head;
			current->prev = head->prev;
			head->prev = current;
			if (head->next)
			{
				head->next->prev = head;
			}
			if (!current->prev)
			{
				(*list) = current;
			}
			head = current->prev;
			print_list(*list);
		}
		current = temp;
	}
}
