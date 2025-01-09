/*
Programa: demo02.c
Descripción: Programa que lee e imprime dos cadenas
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
    char a[30], b[30];

    printf("Ingrese una cadena: ");
    gets(a);

    printf("Ingrese otra cadena: ");
    gets(b);

    printf("{%s} es la cadena ingresada.\n", a);
    printf("{%s} es la segunda cadena ingresada. \n", b);

    return 0;
}