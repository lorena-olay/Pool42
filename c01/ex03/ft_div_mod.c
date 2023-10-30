#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod) {
	*div = a / b;  // Store the division result in div
	*mod = a % b;  // Store the remainder in mod
}
/*
int main() {
	int a;
	int b;
	int result_div, result_mod;
	
	a = 10;
	b = 3;
	ft_div_mod(a, b, &result_div, &result_mod);
	write(1, &result_div, 1);
	write(1, &result_mod, 1);
	int bytes_written = write(1, &result_div, 1);
	printf("Bytes escritos: %d\n", bytes_written);
	return 0;
}
*/

