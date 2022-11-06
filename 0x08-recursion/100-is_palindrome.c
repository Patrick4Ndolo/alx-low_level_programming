#include "main.h"
/**
  *is_palindrome - returns 1if palindrome, and 0 if otherwise
  *@s: - string
  *Return: - Returns 1
  */
int is_palindrome(char *s)
{
	int len = 0;
	
	if (*(s + len))
		return(1);
	return (len
