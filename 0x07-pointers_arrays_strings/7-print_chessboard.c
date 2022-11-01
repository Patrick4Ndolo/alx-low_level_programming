#include "main.h"
/**
  *print_chessboard - prints chessboard
  *@a: - pointer
  *Return: - 0
  */
void print_chessboard(char (*a)[8])
{
	int indices1, indices2;

	for (indices1 = 0; a[indices1][7]; indices1++)
	{
		for (indices2 = 0; indices2 < 8; indices2++)
			_putchar(a[indices1][indices2]);
		_putchar('\n');
	}
}
