#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 *main-program entry point.
 *
 *Return: 1 on success.
 */
int main(void)
{
	char *p = "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n";
	write(2, p, strlen(p));
	return (1);

}
