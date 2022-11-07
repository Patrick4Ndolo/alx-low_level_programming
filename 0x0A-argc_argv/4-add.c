#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
  *checking_digit - if digit
  *@str: - array string
  *Return: success
  */
int checking_digit(char *str)
{
	unsigned int counter;

	counter = 0;

	while (counter < strlen(str))
	{
		if (!isdigit(str[counter]))
		{
			return (1);
		}

	}
	return (0);
}

/**
  *main - Entry
  *@argc: - parameter
  *@argv: - parameter 2
  *Return: - 1 if int, and 0 otherwise
  */
int main(int argc, char *argv[])
{
	int i = 1;
	int str_int;
	int sum = 0;

	while (i < argc)
	{
		if (checking_digit(argv[i]))
		{
			str_int = atoi(argv[i]);
			sum += str_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	i++;
	}
	printf("%d\n", sum);
	return (0);
}




