#include "holberton.h"
/**
 *rot13-encode a string using rot13.
 *@str:string to be encoded.
 *Return:Pointer to encoded string.
 */
char *rot13(char *str)
{
	int i, j;

/*	char characters[52] = {'A', 'B', 'C', 'D', 'E', 'F',
			     'G', 'H', 'I', 'J', 'K', 'L',
			     'M', 'N', 'O', 'P', 'Q', 'R',
			     'S', 'T', 'U', 'V', 'W', 'X',
			     'Y', 'Z', 'a', 'b', 'c', 'd',
			     'e', 'f', 'g', 'h', 'i', 'j',
			     'k', 'l', 'm', 'n', 'o', 'p',
			     'q', 'r', 's', 't', 'u', 'v',
			     'w', 'x', 'y', 'z'};
*/
	char rot13encoded[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
			     'T', 'U', 'V', 'W', 'X', 'Y',
			     'Z', 'A', 'B', 'C', 'D', 'E',
			     'F', 'G', 'H', 'I', 'J', 'K',
			     'L', 'M', 'n', 'o', 'p', 'q',
			     'r', 's', 't', 'u', 'v', 'w',
			     'x', 'y', 'z', 'a', 'b', 'c',
			     'd', 'e', 'f', 'g', 'h', 'i',
				 'j', 'k', 'l', 'm'};



	for(i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j< 52; j++)
		{
			if (str[i] == (rot13encoded[j] - 13))
				{
					str[i] = rot13encoded [j];
				}
		}
	}
	return (str);
}
