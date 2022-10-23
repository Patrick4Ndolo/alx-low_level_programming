#include <stdio.h>
#include <string.h>

/**
 * main - prints alphabets in uppercase
 * Return: value 0
 */
int main(void)
{
	char ka;

	for (ka = 'a'; ka <= 'z'; ka++)

		putchar(ka);


	for (ka = 'A'; ka <= 'Z'; ka++)

		putchar(ka);



	putchar('\n');

	return (0);
}
