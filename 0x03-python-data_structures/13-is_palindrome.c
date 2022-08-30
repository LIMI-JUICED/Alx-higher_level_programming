#include "lists.h"
/**
 * palindrome - check if if palidrondrome with recursion
 * @l: l
 * @r: r
 *
 * Return: 1 palindrome, 0 not palindrome
 */
int palindrome(listint_ **l, listint_t *r)
{
	int response;

	if (r != NULL)
	{
		response = palindrome(l, r->next);
		if (response != 0)
		{
			response = (r->n == (*l)->n);
			*l = (*l)->next;
			return (response);
		}
		return (0);
	}
	return (1);
}
/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: Head of linked list
 *
 * Return: 1 palindrome, 0 not palindrome
 */
int is_palindrome(listint **head)
{
	if (head == NULL)
	{
		return (0);
	}
	return (palindrome(head, *head));
}
