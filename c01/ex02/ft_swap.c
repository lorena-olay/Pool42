#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
/*
int main()
{
	int a;
	int b;
	char buffer[2];


	a = 1;
	b= 2;
	ft_swap(&a, &b);
	buffer[0] = '0' + a;
	buffer[1] = '0' + b;
	write(1, buffer, 2);	
	return 0;
}
*/
