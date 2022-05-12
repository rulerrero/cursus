/*BUCLE WHILE*/

#include <stdio.h>

/*int main()
{
    int x = 0;
    while (x <= 100)
    {
        printf("x vale %d\n", x);
        x++;
    }
    printf("salimos del blucle.\n");
}*/

void    prueba_while(char* x)
{
    int x = 10;
        printf("a\n");
    while(x < 10)
    {
        printf("b\n");
    }
    printf("c\n");
}

void    prueba_do(char* x)
{
    int x = 10;
        printf("a\n");
    do
    {
        printf("b\n");
    }
    while(x < 10);
    {
    printf("c\n");    
    }
}

int main()
{
    printf("WHILE\n");
    printf("%s\n", prueba_while(x));
    printf("DO WHILE\n");
    printf("%s\n", prueba_do(x));
    return 0;
}