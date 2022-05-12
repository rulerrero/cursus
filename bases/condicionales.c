
#include <stdio.h>

/*int	main(void)
{
	int x = 25;

	if (x >= 18)
	//instrucciones que se van a ejecutar si las condiciones se cumplen
	{
		printf("mayor de edad\n");
	}
	//ejecuta instrucciones si no se cumplen las condiciones
	//a == b || a >= b || a > b || a < b || a <= b || a != b (no igual)
	// vuleanos: (x > 20 && x < 30) y logico || o logico
	else
	{
		printf("menor de edad\n");
	}
	printf("esto se ejecuta siempre\n");
	return (0);
}*/

/* DIAS DE LA SEMANA */

/*int	main(void)
{
	int x = 6;

	if(x == 1)
		printf("lunes");
	else if (x == 2)
		printf("martes");
	else if (x == 3)
		printf("mmiercoles"); //MAL!!!!!!!!!!!!!!!!!
	else if (x == 4)
		printf("jueves");
	else if (x <= 7)
		printf("finde");
	else
		printf("error");
return (0);
}*/

#include <stdio.h> 	//case: se le puede identificar un valor que puede o no tener esa variable
					//default: si le pasas un valor que no esté en ningun case se ejecuta automaticamente
void	print_day(int num_day)
{
	switch(num_day)
	{
		case 1: 
			printf("lunes");
			break;
		case 2: 
			printf("martes");
			break;
		case 3:
			printf("miercoles");
			break;
		case 4: 
			printf("jueves");
			break;
		case 5: 
			printf("viernes");
			break;
		case 6: 
			printf("sabado");
			break;
		case 7: 
			printf("domingo");
			break;
		default: 
			printf("no existe");
			break;
		
	}
}

int	main()
{
	print_day(8, 2);

	return 0;
}