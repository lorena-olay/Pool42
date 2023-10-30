#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
	int number;
	int *********nbr;
	
	number = 3;
	nbr = &number;
	ft_ultimate_ft(&nbr);
	write(1, &number, 1);
	return 0;
}
// Pass a pointer to the pointer
