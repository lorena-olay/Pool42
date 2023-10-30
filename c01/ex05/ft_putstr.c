#include <unistd.h>

void	ft_putstr(char *str) 
{
	int i = 0;
	while (str[i] != '\0') 
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int main() {
    char message[] = "Hola, este es un ejemplo.\n";
    ft_putstr(message);
    return 0;
}
*/
/*
El \0 es un carácter especial en programación que se llama "carácter nulo" o "carácter de terminación nula".
*/
