#include "holberton.h"
/**
 *_memcpy-copies memory area.
 *@dest:destination memory area.
 *@src:source memory area.
 *@n:size to copy.
 *
 *Return:pointer to destination memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	/*const char *pszSource =( const char*)src;*/
	if ((dest != '\0') && (src != '\0'))
	{
		while (n)
		{
			/*Copy byte by byte*/
			*(dest++) = *(src++);
			--n;
		}
	}
	return (dest);
}
