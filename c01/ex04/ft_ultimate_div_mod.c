#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp_a = *a;  // Store the original value of a
	*a = temp_a / *b;  // Store the division result in a
	*b = temp_a % *b;  // Store the remainder in b
}

/*
int main() {
    int x = 10;
    int y = 3;
    int *a = &x;  // Apunta a 'x'
    int *b = &y;  // Apunta a 'y'

    ft_ultimate_div_mod(a, b);

    char result_a[12];
    char result_b[12];

    snprintf(result_a, sizeof(result_a), "%d", *a);  // Convierte 'a' a una cadena
    snprintf(result_b, sizeof(result_b), "%d", *b);  // Convierte 'b' a una cadena

    write(1, "Division result (a): ", 21);
    write(1, result_a, strlen(result_a));
    write(1, "\n", 1);

    write(1, "Remainder (b): ", 16);
    write(1, result_b, strlen(result_b));
    write(1, "\n", 1);

    return 0;
}
*/
