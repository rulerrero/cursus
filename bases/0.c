/* 
DATOS

VARIABLES
int: guarda un numero entero
	short		16bits +32000 <> -32000
	int			32bits	2147483647, -2147483648
	long		64bits	9223372036854775807	-9223372036854775807 - 1
	unsigned	sin signo

float: numeros con decimales 
char: 'a' 'E' '4' '!'
cadena de caracteres: "Hola que tal"
void: funciones que no devuelven nada
*/

//EJEMPLOS

#include <stdio.h>

/*int main()
{
    char	x;
	int		y;

	x = 'c';
	y = 25;

	int z = 2 * y; //el doble de y

	printf("%d\n", z);
	
	return (0);
}*/


#include <stdio.h>

void	print_dat(int edad, char* nombre)
{
	printf("Tu nombre es %s, y tu edad es %d.\n", nombre ,edad);
}

int main()
{
print_dat(39, "Raúl");
	return (0);
}
