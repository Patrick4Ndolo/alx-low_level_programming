#include "3-calc.h"
/**
  *op_add - adds two numbers
  *@a: - first argument
  *@b: - second argument
  *Return: - sum of arguments
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  *op_sub - subtracts two numbers
  *@a: first argument
  *@b: second argument
  *Return: - difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - multiplies two numbers
  *@a: first argument
  *@b: second argument
  *Return: product
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  *op_div - divides two numbers
  *@a: first argument
  *@b: second argument
  *Return: quotient
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(10);
	}

	return (a / b);
}

/**
  *op_mod - calculate modules of two numbers
  *@a: first argument
  *@b: second argument
  *Return: modules
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}


