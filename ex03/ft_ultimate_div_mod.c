#include<stdio.h>
#include<unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int x;
	int y;

	x = *a / *b;
	*a = x;
	y = *a % *b;
	*b = y;
} 
