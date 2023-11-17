#include "shell.h"

/**
 * bfree - to free a pointerr and nulls the addr
 * @ptr: addr of the pointer to free
 * Return: 1 if freed else 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
