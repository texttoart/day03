#include<unistd.h>

	void ft_swap(int *a, int *b)
{
		int temp = *a;
		*a = *b;
		*b = temp;
}
/*Dans cette fonction, je déclare une variable temporaire temp qui stockera la valeur de *a. Ensuite, la valeur de *b à *a.
 Enfin, la valeur de temp à *b. De cette manière, les valeurs des deux entiers sont échangées.*/

