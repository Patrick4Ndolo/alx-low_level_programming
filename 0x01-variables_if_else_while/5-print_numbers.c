#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints single digit numbers of base 10
 * Return: value 0
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)

		printf("%d", number);
	putchar('\n');
	return (0);

}
