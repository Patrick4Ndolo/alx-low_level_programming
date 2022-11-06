#include "main.h"
/**
  *is_prime_number - returns 1 if the input integr is prime number
  *Return: - 1 if n is prime number, and 0 otherwise
  *@n: - input int
  */
is_prime_number(int n)
{
	return (check_prime);
}

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (n % i == 0 && i > 1)

		return (0);
	else if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}

