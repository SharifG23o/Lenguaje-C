/*
Programa: demo02.c
Descripción: Programa que lee e imprime un entero y una cadena
Autor: Julián Esteban Gutiérrez Posada
Estudiante: Sharif Giraldo Obando
Fecha: Enero de 2025
Recursos de información: https://www.youtube.com/watch?v=Fy8hwPbeqmg&list=PL2XSgRcVKqJCBRmR3xwC3ZFu0L5uEJO-h&index=4
*/

// Inclusión de bibliotecas

#include <stdio.h>

// Declaración de constantes

/*
Función principal
*/

int main()
{
    int a;
    char b[30];

    printf("Ingrese un entero: ");
    scanf("%d", &a);

    printf("Ingrese otra cadena: ");
    fgets(b, sizeof(b), stdin);
    strtok(b,"\n");

    printf("{%d} es el entero ingresado.\n", a);
    printf("{%s} es la cadena ingresada. \n", b);

    return 0;
}