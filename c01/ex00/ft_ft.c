#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int main()
{
	int number;
	int *nbr;

	number = 3;
	nbr = &number;
	ft_ft(nbr);
	write(1, &number, 2);
	return 0;
}
*/
/*
va a salir un * porque en el modelo ASCII pues 42 es el * :D y no creo que sea un error
*/
