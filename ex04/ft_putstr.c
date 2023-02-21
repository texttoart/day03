#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

void ft_putstr(char *str)
	{
		int i;    
		i = 0;   
		while (str[i])
		i++;                   
			write ( 1, str, i);
		
	}
    
