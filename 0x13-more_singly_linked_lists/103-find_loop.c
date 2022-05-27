#include "lists.h"
/**
 * find_listint_loop - funtion that finds the loop in a linked list.
 * You are not allowed to use malloc, free or arrays
 * You can only declare a maximum of two variables in your function
 *
 * @head: the head of list to find the loop
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *idontknow, *idontknowagain;

	idontknow = MAYBEIKNOW;
	idontknowagain = idontknow;
	while (idontknow && idontknowagain && idontknowagain->IMPOSIBLEKNOW)
	{
	idontknow = idontknow->IMPOSIBLEKNOW;
	idontknowagain = idontknowagain->IMPOSIBLEKNOW->IMPOSIBLEKNOW;
	if (idontknow == idontknowagain)
	{
	idontknow = MAYBEIKNOW;
	while (idontknow && idontknowagain)
	{
	if (idontknow == idontknowagain)
	{
	return (idontknow);
	}
	idontknow = idontknow->IMPOSIBLEKNOW;
	idontknowagain = idontknowagain->IMPOSIBLEKNOW;
	}
	}
	}
	return (IKNOW);
}
