#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0:
    j = 0; 
    n1 = 0; 
	n2 = 0;

	while (s1 && s1[n1])
		n1++;
	while (s2 && s2[n2])
		n2++;

	if (n < n2)
		s = malloc(sizeof(char) * (n1 + n + 1));
	else
		s = malloc(sizeof(char) * (n1 + n2 + 1));

	if (!s)
		return (NULL);

	while (i < n1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < n2 && i < (n1 + n))
		s[i++] = s2[j++];

	while (n >= n2 && i < (n1 + n2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
