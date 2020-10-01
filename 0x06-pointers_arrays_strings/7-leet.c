#include "holberton.h"
/**
 *leet-encode a string into 1337.
 *@s:pointer to the string to be encoded.
 *
 *Return: encoded string.(1337)
 */

char *leet(char *s)
{
	int i = 0, j;
/*special characters to be encoded*/
	char leet[5] = {'a', 'e', 'o', 't', 'l'};
/*mapping for the characters.*/
	char leetencoded[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] ==  leet[j] || s[i] == (leet[j] - 32))
			{
				*(s + i) = leetencoded[j];
			}
		}
	}
	return (s);
}
