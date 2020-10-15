
#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string.
 * @s2: pointer to 2nd string.
 * @n: Number of bytes from n2 to concatenate.
 *
 * Return:Pointer to space in memory containing concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, s1_length, s2_length;

/*Check if the strings passed are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
/*Compute the length of the strings*/

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;

	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;
/*Allocate space in memory equal to the size of the strings + null character*/
	str = malloc(s1_length + s2_length + 1);


	if (n >= s2_length)
		n = s2_length;

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (i = 0; i < n; i++)
		str[s1_length + i] = s2[i];

	str[s1_length + n] = '\0';

	if (str == NULL)
		return (NULL);

	return (str);
}
