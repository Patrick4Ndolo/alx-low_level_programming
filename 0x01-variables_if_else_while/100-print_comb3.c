#include <stdio.h>
/**
 * main - prints combination of two digits
 * Return: value 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		putchar(i + '0');
		if (i < 99)
		{
			putchar(',');
			putchar(' ');

		}
	}
	putchar("n\");
	return (0);
}
