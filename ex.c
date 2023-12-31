#include "shell.h"

/**
 **_strncpy - fxn to copy a string
 *@dest: the destination string to be copied to
 *@src: the source string
 *@n: the amount of char to be copied
 *Return: the concatenated str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, b;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		b = i;
		while (b < n)
		{
			dest[b] = '\0';
			b++;
		}
	}
	return (s);
}

/**
 **_strncat - concatenates two strings
 *@dest: the 1st string
 *@src: the 2nd string
 *@n: the amount of bytes to be used
 *Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, b;
	char *s = dest;

	i = 0;
	b = 0;
	while (dest[i] != '\0')
		i++;
	while (src[b] != '\0' && b < n)
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	if (b < n)
		dest[i] = '\0';
	return (s);
}

/**
 **_strchr - locates a character in a string
 *@s: the string to be parsed
 *@c: the character to look for
 *Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
