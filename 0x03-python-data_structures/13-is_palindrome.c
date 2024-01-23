#include "lists.h"
/**
 * reverse - reverses a linked list
 * @head: pointer to first node in list
 *
 * Return: pointer to first node in new list
 */
listint_t *reverse(listint_t *head)
{
	listint_t *prev = 0, *next = 0;

	while (head != 0)
	{
		next = head->next;
		head->next = prev;
		prev = head;
		head = next;
	}

	return (prev);
}
/**
 * compare - compares two linked lists
 * @a: pointer to first list
 * @b: pointer to second list
 *
 * Return: 1 if lists are the same, 0 if not
 */
int compare(listint_t *a, listint_t *b)
{
	while (a != 0 && b != 0)
	{
		if (a->n != b->n)
			return (0);
		a = a->next;
		b = b->next;
	}

	if (a == 0 && b == 0)
		return (1);

	return (0);
}
/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: pointer to the linked list
 *
 * Return: 1 if list is linked , 0 if it's not
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow = *head, *fast = *head, *prev_slow = *head;
	listint_t *second_half, *prev = 0;
	int res = 1;

	if (*head != 0 && (*head)->next != 0)
	{
		while (fast != 0 && fast->next != 0)
		{
			fast = fast->next->next;
			prev = slow;
			slow = slow->next;
		}

		if (fast != 0)
		{
			slow = slow->next;
		}

		second_half = slow;
		prev->next = 0;
		second_half = reverse(second_half);
		res = compare(prev_slow, second_half);
		second_half = reverse(second_half);
		prev->next = second_half;
	}

	return (res);
}
