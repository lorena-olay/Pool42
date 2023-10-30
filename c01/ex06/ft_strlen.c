#include <unistd.h>

int	ft_strlen(char *str)
{
	int count = 0;  // Inicializamos el contador a cero
	while (str[count] != '\0')
	{
		count++;  // Incrementamos el contador por cada carácter en la cadena
	}
	return count;  // Devolvemos el número de caracteres
}

int main() {
    const char *message = "¡Hola, mundo!";
    int character_count = ft_strlen(message);
    write(1, &character_count, strlen(character_count));
    return 0;
}
